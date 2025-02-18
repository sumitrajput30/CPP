#include<iostream>
using namespace std;
int main()

{
    int a[8]={10,3,8};
    cout<<sizeof(a)<<"\n";
    for(int i=0;i<8;i++)
    {
        cout<<a[i]<<"\n";
    }
    cout<<"another output\n";
    int a1[]={2,3,4,56,6,78,5};
    int s=sizeof(a1)/sizeof(a1[0]);
    for(int i=0;i<s;i++)
    {
        cout<<a1[i]<<"\n";
    }
}
