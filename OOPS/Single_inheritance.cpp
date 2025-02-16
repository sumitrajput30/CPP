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
        public:void info()

    {
      cout<<"class SBI\n";

    }
};
int main()
{
    SBI customer;
    customer.info();
    customer.msg();
}
