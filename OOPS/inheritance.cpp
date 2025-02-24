#include<iostream>
using namespace std;
class college
{
    int a,b;
    public:void principal()
{
    cout<<"s\n";

}
};

class student
{
    int a,b;
    public:void principal()
    {
        cout<<"n\n";

    }
};
int main()
{
    student s;
    s.principal();
    cout<<"\memory="<<sizeof(s);
}
