#include<iostream>
using namespace std;
int main()

{
    int a,p=0;
    cout<<"enter any value\n";
    cin>>a;

    while(a>0)
    {
        p++;
        a=a/10;
    }
    cout<<"total ="<<p;
}
