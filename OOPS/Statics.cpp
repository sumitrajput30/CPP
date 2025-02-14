#include<iostream>
using namespace std;
// statics function
// static function or static data member function is an attribute of class
// and no static data member is an attribute of obj

class student
{
   public:static int a;
    public:static void show()
    {
        cout<<"static function\n";
    }

};
int student ::a=90;
int main()
{
    student::show(); // scope re

    cout<<student::a;

}
