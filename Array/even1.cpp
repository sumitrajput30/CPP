#include<iostream>
using namespace std;
void fact (int a[],int s)
{

 for(int i=0;i<=s;i++)
  {
      if(a[i]%2==0)
   {
        cout<<a[i]<<"\t";
   }
  }




}

int main()
{
    int a[] = {3,2,1,9,5};
    int s=sizeof(a)/sizeof(a[0]);
    fact (a,s);
}
