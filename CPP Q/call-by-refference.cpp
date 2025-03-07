#include<iostream>
using namespace std;
void swp (int &a, int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"a="<<a<<"\n";
    cout<<"b="<<b<<"\n";
}
int main()
{


int a,b;
cout<<"enter two for swapping\n";
cin>>a>>b;
swp(a,b);

}
