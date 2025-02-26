#include <iostream>
using namespace std;
int main()

{
    int n;
    cout<<"enter any no\n";
    cin>>n;

    for(int r=1;r<=n;r++)
    {
    int coef=1;
     for (int s=r-n;s>0;s--)
     {
         cout<<" ";
     }
     for (int c=1;c<=r;c++)
     {
         cout<<coef<<" ";
         coef = coef*(r-c)/c;

     }
     cout<<"\n";

    }
}
