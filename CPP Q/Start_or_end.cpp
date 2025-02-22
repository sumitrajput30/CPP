// wap to display the even start and end between

#include<iostream>
using namespace std;
void fact (int a,int b)
{

  if(a<b)
{


  for(int i=a;i<=b;i++)
  {
      if(i%2==0)
   {
        cout<<i<<"\t";
   }
  }



}
}

int main()
{

int k,l;
cout<<"enter two no\n";
cin>>k;
cout<<"enter two no\n";
cin>>l;
fact(k,l);

}
