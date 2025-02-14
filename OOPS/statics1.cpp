#include<iostream>
using namespace std;
class cybrom
{  public:static int a,b;
    public:static void sum (int k, int j)
    {
        a=k;
        b=j;
        cout<<a+b;

    }
};
int a;
int b;
int main()
{
    cybrom::sum(4,5);
}
