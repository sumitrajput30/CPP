#include<iostream>
using namespace std;
struct emp //collection of user define datatype
{
    int age;
    char name[20];
    float salary;
    bool status;
    void hello()
    {
        cout<<"\n done";
    }
}v;
int main()
{
  struct emp v;
  cout<<"enter name\n";
  cin>>v.name;
  cout<<"enter age\n";
  cin>>v.age;
  cout<<"enter salary\n";
  cin>>v.salary;
  cout<<"r u married\n";
  cin>>v.status;
  v.hello();

}
