#include<iostream>
using namespace std;
/*int a=90;
int main()
// scope resolution
{
    int a=9;
    cout::a;
}*/

class h1
{

    public:int c;
    public:int sum (int x, int y)
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
