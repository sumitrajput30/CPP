#include<iostream>
using namespace std;
class SBI
{
    public:SBI()
    {
      cout<<"class SBI\n";
    }
};
class AXIS
{
    public:AXIS()
    {
      cout<<"class Axis\n";
    }
};
class customer:public AXIS,public SBI
{
  public:customer()

{
    cout<<"paisa doob gaya\n";
}
};
int main()
{
    customer c;

}
