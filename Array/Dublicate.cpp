#include<iostream>
using namespace std;
int main()

{
    int s;
    cout<<"enter the size of array\n";
    cin>>s;
    int a[s];
    cout<<"value\n";
    for(int i=0;i<s;i++)
    {
        cin>>a[i];
    }
    cout<<"output\n";
    for(int i=0;i<s;i++)
    {


        for(int j=i;j<s-1;j++)
    {
        if(a[i] == a[j+1])
        {
            cout<<a[i]<<" ";
        }

    }

    }

}
