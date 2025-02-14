// Constructor is used to allocated memory of a obj by default each class having on constructor
// there are following type of constructor

// 1 Default
// 2 parametrized constructor
// 3 copy constructor ( shallow copy, Deep copy )

#include<iostream>
using namespace std;

class cybrom
{
    int a;
    public:cybrom() // do not pass parameter
    {
   cout<<"memory allocated\n";
    }
};

int main()

{
    cybrom m;
    cout<<sizeof(m);
}
