#include<iostream>
using namespace std;
int main()

{

    int a[2][2][3]={1,22,2,2,2,3,5,4,4,5,4,5,};

    for(int t=0;t<2;t++)
    {
       for(int r=0;r<2;r++)
       {

           for(int c=0;c<3;c++)
           {
              cout<<a[t][r][c]<<" ";
           }
           cout<<"\n";
       }
        cout<<"\n";
    }
}
