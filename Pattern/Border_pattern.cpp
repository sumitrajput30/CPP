#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter any no\n";
    cin>>n;
    for (int r=1;r<=n;r++)
    {
        for (int c=1;c<=n;c++)

        {
            if ( r==n || r==1 || c==1 || c==n)
            {


                cout<<"*";
            }


      else
      {
          cout<<" ";
      }

    }

    cout<<"\n";


}
}
