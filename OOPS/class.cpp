#include<iostream>
using namespace std;

class h1
{
    public:int c;
    public:int sum(int x, int y)

    {
       c=x+y;

    }
    void show()
    {
        cout<<c;
    }
};

int main()
{
    h1 obj;
    obj.sum(3,5);
    cout<<obj.c;
}
