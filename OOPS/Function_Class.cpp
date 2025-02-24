#include<iostream>
using namespace std;
class student2;
class student1
{
    int marks=450;
    public:void show()
    {
        cout<<"\ntotal marks of 10th class of student1\n="<<marks;
    }
    friend void result (student1, student2);
};

class student2
{
    int marks=490;
    public:void show()
    {
        cout<<"\ntotal marks of 10th class of student2="<<marks<<"\n";
    }
    friend void result (student1, student2);
};
void result (student1 x,student2 y)
{
    if (x.marks>y.marks)
    {
        cout<<"highest score of student1="<<x.marks;
    }
    else
    {
        cout<<"highest score of student1="<<y.marks;
    }

}

int main()
{
    student1 st1;
    st1.show();
    student2 st2;
    st2.show();
    result (st1,st2);
}
