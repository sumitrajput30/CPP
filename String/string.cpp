#include<iostream>
using namespace std;
#include<string>
int main()
{
  char arr[] = {'a', 'b', 'v', '\0'};
  //char p[]={"joy"}; // string literal
  //p[0]='b';
  char p[0];
  cout<<"\nenter name\n";
  cin.get(p,15,'$');
  cout<<"name="<<p;
}
