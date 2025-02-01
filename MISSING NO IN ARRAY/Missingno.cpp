#include<iostream>
using namespace std;
int main()
{

    int a[]={1,2,4,5,6,8};

    int n=sizeof(a)/sizeof(a[0]);

    int i=0,k=1;
    while (i<n)
    {
        if(a[i]==k)
        {
            i++;
            k++;
        }
        else
        {
           cout<<"The value of "<<k<<" is missing. \n";
           k++;
        }


    }


}