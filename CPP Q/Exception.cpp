// abnormal suition in a program is called exception
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter first value\n";
    cin>>a;
    cout<<"enter second value\n";
    cin>>b;
    try
    {
        if(b==0)
          {


            throw b;
          }

        int c=a/b;
        cout<<"result"<<c<<"\n";
    }
    catch(int t)
    {
        cout<<"deno can not be zero\n";
    }
    cout<<"finished\n";
}
