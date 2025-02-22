#include<iostream>
using namespace std;
void cyb(int a ,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"a="<<a;
    cout<<"b="<<b;
}
int main()

{
    int a,b;
    cout<<"enter any two no\n";
    cin>>a>>b;
    cyb(a,b);

}

