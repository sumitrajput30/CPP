#include<iostream>
using namespace std;
int main()
{
   int a[] = {4,2,35,45,86,58,55,65,52,5,22}
   int s= sizeof a/sizeof(a[0]);


   for(int r=0;r<s;r++)
   {
       int flag =1;
       int k=a[i]-1;
       while(k>1)
        if(a[i]%k==0)
       {
         flag=0;
         break;
       }
       k--;
   }
   if (flag==1)
}
