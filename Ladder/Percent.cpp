#include<iostream>
using namespace std;
int main()
{

    int p,c,m,total;
    float per;
    cout<<"enter physic no\n";
    cin>>p;

    cout<<"enter chemistry no\n";
    cin>>c;

    cout<<"enter maths no\n";
    cin>>m;
    total=p+c+m;
    per=total/3;

    if(p<35 && c>=35 && m>=35)
        {
        cout<<"u got supply in physics\n";
    }
    else if (c<35 && p>=35 && m>=35)
    {
        cout<<"u got supply in chemistry\n";
    }
    else if (m<35 && p>=35 && c>=35)
    {

        cout<<"u got supply in maths\n";
    }






    else if (per>=60 &&per<=100)
    {
        cout<<"1st\n";
    }

        else if (per<=59&&per>=45){

        cout<<"2st\n";

        }
        else if (per<=44&&per>=35)
        {

        cout<<"3st\n";
        }

        else
        {
            cout<<"fail";
        }


}
