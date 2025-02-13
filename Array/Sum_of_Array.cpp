#include<iostream>
using namespace std;
int main()

{
    int s;
    cout<<"enter size of array\n";
    cin>>s;
    int a[s];
    int c=0;
    cout<<"enter value\n";
    for (int i=0;i<s;i++)
    {
        cin>>a[i];

    }
    cout<<"stored data\n";
     for (int i=0;i<s;i++)
     {
         cout<<a[i]<<"\t";
     }
     for(int i=0;i<s;i++)
    {
        c=c+a[i];
    }
    cout<<"total\t="<<c;
}
