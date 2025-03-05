#include<iostream>
using namespace std;
int main()
{
int a,p=0;
int rev=0;
int n;
cout<<"enter any no\n";
cin>>a;
n=a;
while(a>0)
{

    p++;
    rev=rev*10+a%10;
    a=a/10;

}
cout<<p<<" ";
cout<<rev<<" ";

  if(rev==n)
{
    cout<<"it is palidrom\n";
}
  else
{
    cout<<"it is not palidrom";
}
}





