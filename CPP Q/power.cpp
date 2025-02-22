#include <iostream>
using namespace std;
int main()

{
    int b,p,r=1;
    cout<<"enter base value\n";
    cin>>b;
    cout<<"enter power value\n";
    cin>>p;

    while(p>=1)
    {
        r=r*b;
        p--;
    }
    cout<<r;
}
