#include<iostream>
using namespace std;
 class st
 // this pointer belong to reffere to current class
 {
     int info;
     public:st(int info) // parametrized contru
     {
         this->info=info;

     }
     void show ()
     {
         cout<<"value="<<info;
     }

 };

 int main()
 {
     st t(40);
     t.show();
 }
