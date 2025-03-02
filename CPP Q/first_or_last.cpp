#include<iostream>
using namespace std;
int main()

{
int n,sw=0,rm=0;
cout<<"enter any no\n";
cin>>n;
while (n>0)
{


    rm=n%10;
    sw=sw*10+rm;
    n=n/10;

}
cout<<"first and last"<<sw;
}
