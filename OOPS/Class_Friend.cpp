#include<iostream>
using namespace std;
class amit
{
    int num;
     protected:int num1;
    public:amit()
    {

        num=60;
        num1=90;
    }
    friend class joy;

};


class joy
{
public:
    void show (amit &a)
    {
        cout<<"private variable ="<<a.num;
        cout<<"protected variable="<<a.num1;
    }
};

int main()
{

 amit a1;
 joy j1;
 j1.show(a1);
}
