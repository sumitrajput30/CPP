#include<iostream>
using namespace std;

int recur(int a)
{


if(a==0)
{
    return 0;

}
recur(a-1);
cout<<a<<"\n";
}

int main()

{
    int a;
    a=4;
    recur(8);
}
