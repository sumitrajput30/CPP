#include<iostream>
using namespace std;
void fact (int a)
{
    int k=a-1;
    while (k>1)
    {
        a=a*k;
        k--;
    }
    cout<<a;
}
int main()
{

    int d;
    cout<<"enter any no to generated factorial\n";
    cin>>d;
    fact(d);
}
