#include<iostream>
using namespace std;
class rbi // super class
{
    public:virtual void msg()
    {
        cout<<"\nrbi\n";
    }

};
class sbi:public rbi
{
    public:virtual void msg()
    {
        cout<<"\nsbi\n";
    }

};

class axis:public rbi
{
    public:virtual void msg()
    {
        cout<<"\naxis\n";
    }

};

int main()
{
    rbi *rb;
    rbi p;
    rb=&p;
    rb->msg();
    sbi obj;
    axis obj2;
    rb = &obj2;
    rb->msg();
    rb=&obj;
    rb->msg();
}

