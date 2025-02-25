#include<iostream>
using namespace std;
int main()

{
    char c='2';
    int count =3;
    for (int i=1;i<=3;i++)
    {
         for( int s=3-i;s>=1;s--)
        {
            cout<<" ";
        }
        for (int j=0;j<=i;j++)
        {
            cout<<c<<" ";
            c++;
        }
        c=c+count;
        count=count+2;
        cout<<"\n" ;
    }
}
