#include<iostream>
using namespace std;
int main()

{
    int a,i;
    cout<<"enter any no\n";
    cin>>a;
    for(i=1;i<a/2;i++)
    {
       if(i*i==a)
       {
           cout<<i<<"\n";

       }
    }
    cout<<"last value of i\n"<<i;
}
