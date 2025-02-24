//q5

#include<iostream>
using namespace std;
int main()

{
    char c='J';
    int count =3;
    for (int i=0;i<4;i++)
    {
        for (int j=0;j<=i;j++)
        {
            cout<<c<<" ";
            c++;
        }
        c=c-count;
        count=count+2;
        cout<<"\n" ;
    }
}
