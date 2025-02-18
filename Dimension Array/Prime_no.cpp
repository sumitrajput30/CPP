#include<iostream>
using namespace std;
int main()

{
    int a[]={4,2,4,2,5,8,9};
    int s=sizeof(a)/sizeof(a[0]);

    for (int i=0;i<s;i++)
    {
       int flag=1;
       int k=a[i]-1;
       while(k>1)
       {
           if(a[i]%k==0)
           {
               flag=0;
               break;
           }
           k--;
       }
       if (flag==1)
       {
           cout<<a[i]<<"\t";
       }
    }
}
