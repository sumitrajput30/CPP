#include<iostream>
using namespace std;
class SBI
{
    public:void msg()
    {
      cout<<"class Sbi\n";
    }
};

class axis
{
    public:void msg()
    {
      cout<<"last axis\n";
    }
};

class customer:public axis,public SBI
{
    public:void show()
    {
      cout<<"paisa doob gaya\n";
    }
};

int main()
{
customer c;
c.show();
c.msg();
}
