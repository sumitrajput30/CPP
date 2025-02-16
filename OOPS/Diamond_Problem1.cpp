#include<iostream>
using namespace std;
class RBI
{
    public:int r=1000;
};
class sbi:virtual public RBI
{
    public:int s=2000;
};
class axis:virtual public RBI
{
    public:int a =3000;
};

class customer:public sbi, public axis
{
    public:int c=500;
};

int main()
{
    customer obj;
    cout<<obj.a<<"\n";
    cout<<obj.c<<"\n";
    cout<<obj.r<<"\n";
}
