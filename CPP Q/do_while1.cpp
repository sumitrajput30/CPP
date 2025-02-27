#include<iostream>
using namespace std;

int main ()
{
int b,p,r=1;
cout<<"enter base no\n";
cin>>b;
cout<<"enter power\n";
cin>>p;
while(p>=1)

{
   r=r*b;
p--;
}
cout<<"result ="<<r;
}
