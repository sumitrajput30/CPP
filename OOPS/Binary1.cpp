#include<iostream>
using namespace std;

class cyb
{
    public:int a;
    public:cyb(int x)
    {
      a=x;
    }
    void operator+(cyb &c1) // binary
    {
        a=a+c1.a;
        cout<<a;
    }
};

int main()
{
    cyb obj1(10);
    cyb obj2(10);
    obj1+(obj2);
}
