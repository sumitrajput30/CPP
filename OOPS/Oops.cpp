#include<iostream>
using namespace std;

class student
{
    public:void sum (int a, int b) // member function

    {
      cout<<"sum="<<a+b<<"\n";
    }
    void table (int d)
    {
        for (int i=1;i<=10;i++)
        {
            cout<<i*d<<"\t";
        }
    }
};

int main()

{
    student obj;
    int x,y;
    cout<<"enter 2 no\n";
    cin>>x>>y;
    obj.sum(x,y);
    cout<<"enter no for table\n";
    cin>>x;
    obj.table(x);
}
