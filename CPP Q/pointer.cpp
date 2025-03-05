#include<iostream>
using namespace std;
int cyb(int a,int b)
{
     return a+b;
}
int main()
{

    int (*fun) (int,int);
    fun=cyb;
    int k=fun(3,4);
    cout<<k;

}

