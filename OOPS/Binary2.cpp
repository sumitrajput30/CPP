#include<iostream>
using namespace std;
class cybrom
{

public:int a;
public:cybrom(int x)
{
   a=x;
}

void operator+ (cybrom &c1)  // binary

{
    a=a+c1.a;
    cout<<a;
}
};
int main()
{
    cybrom obj1(10);
    cybrom obj2(10);
    obj1+obj2;
}
