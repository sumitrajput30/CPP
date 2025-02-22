#include<iostream>
using namespace std;
int cyb(int *a,int s)
{
    for(int i=0;i<s;i++)
      {


     a[i]=a[i]+1;
      }
}
int main()
{

int a[] = {3,2,1,9,5};
    int s=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<s;i++)
      {


     a[i]=a[i]+1;
     cout<<a[i]<<" ";
      }
    cyb (a,s);


}
