/* wap rearrange data of array by putting zero at last but revent should be maintain */
#include<iostream>
using namespace std;
int main()

{
    int s;
    cout<<"enter no array\n";
    cin>>s;
    int a[s];
    int t=0;
    cout<<"enter value\n";

    for(int i=0;i<s;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<s;i++)
    {
        cout<<a[i];
    }
    cout<<"\n result\n";
     for(int i=0;i<s;i++)
    {
    if (a[i]!=0)
    {
        a[t]=a[i];
    }
    }

while (t<s)
{
    a[t]=0;
    t++;

}
for(int i=0;i<t;i++)
{
    cout<<a[i]<<"\t";
}
}
