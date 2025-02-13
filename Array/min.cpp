#include<iostream>
using namespace std;
int main()

{
    int a[5]={34,8,5,6,23};
    cout<<"\nresult:\n";
    int mn=a[0];

 for (int i=1;i<5;i++)
     {

      if (mn>a[i])
          {
             mn=a[i];
          }
     }
     cout<<"min value="<<mn;
}
