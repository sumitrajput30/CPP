#include<iostream>
using namespace std;
int main()
{
int number;
cout<<"enter no\n";
cin>>number;

if(number<=100)
{
cout<<number*10;
}

else if(number<=100 && number<=200)
{
    cout<<(100*10+(number-100)*15);
}

else if (number<=
         200 && number<=300)
{
   cout<<(100*10+100*15+(number-200)*20);
}
else
    cout<<(100*10+100*15+100*20+(number-300)*25);
}
