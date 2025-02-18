#include<iostream>
using namespace std;
int main()

{ int a[2][2];
int b[2][2];

cout<<"enter 4 values\n";
    for(int r=0;r<2;r++)
    {
        for(int c=0;c<2;c++)
        {
            cin>>a[r][c];
        }
    }



cout<<"enter 4 values\n";

    for(int r=0;r<2;r++)
    {
        for(int c=0;c<2;c++)
        {
            cin>>b[r][c];
        }
    }



    for(int r=0;r<2;r++)
    {
        for(int c=0;c<2;c++)
        {
            cout<<a[r][c]*b[r][c]<<"  ";


        }
        cout<<"\n";
    }




}


