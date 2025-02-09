#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter a\n";
    cin>>a;
    if(a==30)
    {
        cout<<"30 month apr,june,sept,nov\n";

    }
       else if(a==31)
       {
           cout<<"jan,mar,july,aug,oct,dec\n";
       }
        else if (a==29 ||a==28)
       {
           cout<<"feb";
       }
   else
    cout<<"not valid";
}
