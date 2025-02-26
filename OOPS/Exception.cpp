#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter first no\n";
    cin>>a;
    cout<<"enter second no\n";
    cin>>b;
    try
    {
        if(b==0)
        {
            throw b;

        }
        c=a/b;
        cout<<c<<"\n";
    }
    catch(int t)
    {
        cout<<"denominator is not zero\n";
    }
    cout<<"finish\n";
}
