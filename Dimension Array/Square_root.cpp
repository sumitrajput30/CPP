#include<iostream>
using namespace std;
int main()

{
    int s;
    cout<<"enter size of array\n";
    cin>>s;
    int a[s];
    int n=2;
    cout<<"enter value\n";
    for (int i=0;i<s;i++)
    {
        cin>>a[i];

    }
    cout<<"square root\n";
     for(int i=0;i<s;i++)
    {

        cout<<a[i]*a[i]<<"\t";
    }

}

