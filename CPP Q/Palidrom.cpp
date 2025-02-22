#include<iostream>
using namespace std;
int main()

{
    int n,rav=0;
    int a;
    cout<<"enter any no\n";
    cin>>n;
    a=n;
    while(n>0)
        {

        rav=rav*10+n%10;
        n=n/10;

    }
    if(rav==a)
    {
        cout<<"it is palidrom\n";

    }
    else
    {
        cout<<"it is not palindrom";
    }
}

