 //
 #include<iostream>
 using namespace std;
 class scam
 {
     public:void virus()
     {
         cout<<"ur system got hacked";
 
     }
 };
 
 class client
 {
     scam d;
     public:void reward()
   {
       cout<<"u won $200000\n";
       d.virus();
     }
 };
 
 int main()
 {
     client sad;
     sad.reward();
 }
 