// thread is a light weight process
// multi thread: more than one process running parallel
#include<iostream>
using namespace std;
#include<thread>
void show1(int start,int ends)
{
    for (int i=start;i<=ends;i++)
    {
        if(i%2==0)
        {
            cout<<"even="<<i<<"\t";
        }
    }
}
    void show2(int start,int ends)
{
    for (int i=start;i<=ends;i++)
    {
        if(i%2!=0)
        {
            cout<<"odd="<<i<<"\t";
        }
    }
}

int main()
{
thread t1(show1,1,100);
thread t2(show2,1,100);
t1.join();
t2.join();
cout<<"\finished";

}
