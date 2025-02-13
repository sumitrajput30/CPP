#include<iostream>
using namespace std;

class student

{

public:void show()
{
  cout<<"\n hello\n";
}

};
int main()

{
    student obj;
    cout<<sizeof(obj);
    obj.show();
}


