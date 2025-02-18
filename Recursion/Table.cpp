#include<iostream>
using namespace std;
int table (int t, int a)
{
    if(a>10)
    {
        return 0;
        }
        cout<<t*a<<"\n";
        return table(t,a+1);

}
int main()

{
  int n,a=1;
  cout<<"enter any no\n";
  cin>>n;
  table(n,a);

}
