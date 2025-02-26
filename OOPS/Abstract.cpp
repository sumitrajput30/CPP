#include<iostream>
using namespace std;
class rbi // abstract class
{
    public:virtual void msg(); // pure virtual function

};
class sbi:public rbi
{
    public:void show()
    {
        cout<<"SBI class\n";
    }
    void msg()
    {
        cout<<"happy";
    }
};
int main()
{
    rbi *r;
    sbi s;
    r=&s;
    r->msg();
}
