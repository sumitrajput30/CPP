#include<iostream>
using namespace std;
int main()
{
int c,rv=0, rm=0,org;
cout<<"enter any no\n";
cin>>c;
org=c;
while (c>0)
{

    rm=c%10;
    rv=rv*10+rm;
    c=c/10;
}
    if (rv==org){
cout<<"it is palindrome\n";}
    else{
        cout<<"it is not palindrome\n";
    }



}

