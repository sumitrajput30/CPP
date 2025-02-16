#include<iostream>
using namespace std;

class student
{
    string name[10];
    int rno [10];
    int age [10];
    int s;
    public:void input (int r)

    {
        s=r;

        for(int i=0;i<r;i++)
        {
            cout<<"enter name\n";
            cin>>name[i];
            cout<<"enter roll no \n";
            cin>>rno[i];
            cout<<"enter age \n";
            cin>>age[i];
        }
    }
    void show()
    {
        for(int i=0;i<s;i++)
        {
            cout<<name[i]<<"-"<<rno[i]<<"-"<<age[i]<<"\n";
        }
    }
};

int main()
{
    int s;
    cout<<"enter no record\n";
    cin>>s;

    student d;
    d. input(s);
    d.show();
}

