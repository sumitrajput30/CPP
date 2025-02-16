// how to dinteritance
#include<iostream>
using namespace std;
class RBI final // disinherit
{
    public:void msg()
    {
       cout<<"rbi class\n";
    }
};
class sbi:public RBI
{
    public:void show()
    {
        cout<<"sbi class\n";
    }
};
int main()
{
    sbi s;
    s.show();
    s.msg();
}
