#include<iostream>
using namespace std;
class sbi
{

public: void msg()
{
    cout<<"sbi\n";
}
} ;

class axis
{

    public: void msg()
    {
        cout<<"axis\n";
    }
};

class customer:virtual public axis,virtual public sbi

{
  public:void show()
  {
      cout<<"paisa doob gaya\n";
  }
};
int main()
{
    customer c;
    c.msg();
    c.show();
}
