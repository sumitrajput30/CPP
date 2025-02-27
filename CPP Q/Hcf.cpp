#include<iostream>
using namespace std;
int main()
{

    int n1,n2,m;
    cout<<"enter 1 no\n";
    cin>>n1;
    cout<<"enter 2 no\n";
    cin>>n2;
    m=n1>n2?n1:n2;;
    while(m>0)
    {
        if (n1%m==0 && n2%m==0)
        {
            break;
        }
        m--;
    }
    cout<<m;
}
