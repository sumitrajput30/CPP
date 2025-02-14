#include<iostream>
using namespace std;

class student
{
    public:static int a;
    public:static void show()
    {
       cout<<"static function\n";

    }

};
int student::a=90;
int main()
{
    student::show();
    cout<<student::a;
}

class student
{
    public:void show()
    {
      cout<<"sum program\n";
    }
    void sum (int a, int b)

    {
        cout<<"sum="<<a+b<<"\n";
    }
};

int main()
{
    student s;
    s.show();
    s.sum(5,6);
}
