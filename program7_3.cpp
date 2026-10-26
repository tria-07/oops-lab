#include<iostream>
using namespace std;
class account{
    protected:
    double balance=0;
    public:
    void deposit(double a){balance +=a;}
    double get()const{return balance;}
};
class savings:public account{
    public:
    void addintrest(){balance+=balance*1.05;}
};
class current:public account{
    public:
    void charge(double fee){balance-=fee;}
};
int main(){
    savings s; s.deposit(1000); s.addintrest();
    current c; c.deposit(1000); c.charge(50);
    cout<<"savings: "<<s.get()<<endl;
    cout<<"current: "<<c.get()<<endl;
    return 0;
}