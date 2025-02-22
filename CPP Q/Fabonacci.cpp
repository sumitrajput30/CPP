#include<iostream>
using namespace std;
int main()

{

    int n1=0,n2=1,f=0,n;
    cout<<"enter term of fibonacci no\n";
    cin>>n;
    cout<<n1<<"\t"<<n2<<"\t";
        for(int i=1;i<=n;i++)
        {
            if(i==1)
            {
                cout<<n1<<" ";
                continue;
            }
            if(i==2)
            {
                cout<<n2<<" ";
                continue;
            }

            f=n1+n2;
            n1=n2;
            n2=f;

            cout<<f<<"\t";

        }

}
