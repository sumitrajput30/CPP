#include<iostream>
using namespace std;
void sw(int a, int b=5)
{
     a=a+b;
     b=a-b;
     a=a-b;
     cout<<"value a="<<a<<"\n";
     cout<<"value b="<<b;
}
int main()
{
sw(10);


}
