#include<iostream>
using namespace std;
// function overloading in a class
// if a class having more function with same name but using diff parameter is called function overloading in a class
class student
{
 public:void sum()
 {
     cout<<"sum program\n";
 }
 void  sum (int a,int b)
 {
     cout<<"result="<<a+b<<"\n";
 }
};
int main()
{
    student s;
    s.sum();
    s.sum(5,6);

}
