#include<iostream>
using namespace std;
int table (int t, int  a)
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
    int t,a=1;
    cout<<"enter any no for table\n";
    cin>>t;
    table(t,a);
}

