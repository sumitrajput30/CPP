#include<iostream>
using namespace std;
int main()

{
    int a[]={4,2,4,2,5,8,9};
    int s=sizeof(a)/sizeof(a[0]);
    int flag=1;
    for (int i=0;i<s;i++)
    {
        for (int j=i+1;j<s;j++)
        {
            if (a[i]==a[j])
            {
                flag=0;
                a[j]=NULL;
            }
        }
        if(flag ==0 && a[i]!=NULL)
        {
            cout<<a[i]<<"\t";
        }
    }
}
