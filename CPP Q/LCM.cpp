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
    while(1)
    {
        if (m%n1==0 && m%n2==0)
        {
            cout<<m;
            break;
        }
        m++;
    }

}
