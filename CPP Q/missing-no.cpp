#include<iostream>
using namespace std;
int main()
{

    int a[]={1,2,3,4,6};
    int s=sizeof(a)/ sizeof (a[0]);
    for(int i=0;i<s;i++)
    {
        if (a[i]+1!=a[i+1] && i+1<s)
        {
            cout<<a[i]+1;
        }
    }
}
