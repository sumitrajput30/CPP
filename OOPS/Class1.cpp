#include<iostream>
using namespace std;
class Rbi

{
    int roi, amt;
    public:Rbi(int r , int a):roi(r),amt(a)
    {
        cout<<"Roi="<<roi<<"\n";
        cout<<"Amount="<<amt<<"\n";
    }
};
int main()
{
    Rbi xyz(7,10000);
    Rbi abc(8,10000);
}

