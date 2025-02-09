#include<iostream>
using namespace std;
int main()

{

    float a,b,c;
    char d;
    cout<<"enter first no\n";
    cin>>a;
    cout<<"enter first no\n";
    cin>>b;
    cout<<"enter first no\n";
    cin>>c;
    cout<<" select 'a' display smallest no and 's' simple interest and 't' all values are similar or not\n";
    cin>>d;
    switch(d)
{
case 'a':
    {
        if (a<b && a<c)
            cout<<a;
        else if (b<a && b<c)
            cout<<b;
        else
            cout<<c;
            break;

   }

   case 's':
     {

      float si;
      si=(a*b*c)/100;
        cout<<si;
        break;

    }

  case 't':
  {
      if(a==b && a==c  )
        cout<<"similar\n";
        else
        {
            cout<<"different value\n";
        }
        break;

}

  default:
    {
        cout<<"invalid\n";
        break;
    }


}


}
