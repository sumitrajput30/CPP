#include<iostream>
using namespace std;
// shallow copy is static memory used it data copy each other
class cybrom
{

    int r;
    public:cybrom(int a)
    {
        r=a;
    }
    void show()
    {
        cout<<r<<"\n";

    }
    void update()
    {
        r++;
    }
};

int main()

{
   // we are calling or any update obj name change
   cybrom obj(20);//obj==20
   obj.show();
   cybrom obj2(obj);
   obj2.update();
   obj.show();
   obj2.show();
}
