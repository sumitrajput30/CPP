#include<iostream>
using namespace std;
class RBI
{
    protected:int a=-1000;
    public:void msg()
    {
        cout<<"class RBI\n";

    }
};

class SBI:public RBI
{
   public:void show()
   {
     cout<<a<<"RS apko dena hai\n";

   }
};
int main()
{
    SBI I;
    I.msg();
    I.show();
}


