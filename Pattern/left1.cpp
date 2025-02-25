#include<iostream>
using namespace std;
int main()

{
   int a=65;

    for( int r=65;r<=68;r++)
    {
        for( int s=68-r;s>=1;s--)
        {
            cout<<"  ";
        }
        for(int c=65;c<=r;c++)
        {
            cout<< char(a)<<" ";
            a++;

        }

        cout<<"\n";

    }
}

