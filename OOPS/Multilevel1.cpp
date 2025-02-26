#include<iostream>
using namespace std;
class RBI
{
    public:void msg()
    {
       cout<<"class RBI\n";
    }
};
class SBI:public RBI

    {
      public:void show()
    {
      cout<<"class SBI\n";
    }
};

class customer:public SBI
{
    public:void acn()
    {
     cout<<"paisa doob gaya\n";
    }
};

int main()
{
    customer c;
    c.acn();
    c.show();
    c.msg();
}
