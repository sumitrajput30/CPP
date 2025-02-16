#include<iostream>
using namespace std;
 class Rbi

 {
    int roi;
    public:Rbi (int r)
    {
        roi=r;
    }
    void show()
    {
        cout<<"ROI="<<roi<<"\n";
    }
 };

 int main()
 {
     Rbi Axis(9);
     Axis.show();
     Rbi Sbi (Axis);  //call copy constructor // shallow
     Sbi.show();
     Rbi Pnb=Axis; //implicit assignment copy constructor//shallow
     Pnb.show();
 }
