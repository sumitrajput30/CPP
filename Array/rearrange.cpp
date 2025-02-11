/*wap to rearrange the array which a having 1 has prifics or 0 or suprics?*/
#include<iostream>
using namespace std;
int main()

{
    int s;
    cout<<"enter no array\n";
    cin>>s;
    int a[s];
    int t;
    cout<<"enter value\n";

    for(int i=0;i<s;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<s;i++)
    {
        cout<<a[i];
    }
     for(int i=0;i<s;i++)
    {
    for (int j=i;j<s-1;j++)
    {
        if (a[i]<a[j+1])
        {
          t=a[i];
          a[i]=a[j+1];
          a[j+1]=t;
        }
    }


    }
    cout<<"\nasc order=\n";
    for (int i=0;i<s;i++)
    {
        cout<<a[i]<<"\t";
    }
}
