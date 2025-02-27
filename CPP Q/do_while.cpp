#include<iostream>
using namespace std;

int main ()
{
 int n,i=2;
 cout<<"enter no\n";
 cin>>n;
 do
 {
     if (n%i==0)
     {
         break;
     }
        i++;

 }while(i<n);
 if (i==n)
 {
     cout<<"prime";
 }


else
{
    cout<<"not prime";
}

 }
