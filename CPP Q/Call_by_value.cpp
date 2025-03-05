#include<iostream>
using namespace std;
void sw(int a, int b)
{
     a=a+b;
     b=a-b;
     a=a-b;
     cout<<"value a="<<a;
     cout<<"value b="<<b;
}
int main()
{

    int p,t;
    cout<<"enter any two value\n";
    cin>>p>>t;
    sw(p,t);
}
