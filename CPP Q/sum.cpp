#include<iostream>
using namespace std;
int main()
{
int n,m,sum=0;
cout<<"enter any digitno\n";
cin>>n;
while(n>0)
{
    m=n%10;
    sum=sum+m;
    n=n/10;
}
cout<<sum;
}
