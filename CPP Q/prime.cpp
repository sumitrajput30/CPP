#include <iostream>
using namespace std;
int main()

{

    int n,i=2;
    cout<<"enter any no\n";
    cin>>n;

    do{
            if(n%i==0)
            {
                break;
            }

            i++;

    }while(n>0);
    if (n==i)
    {
        cout<<"prime\n";
    }
    else
    {
        cout<<"not prime\n";
    }

}
