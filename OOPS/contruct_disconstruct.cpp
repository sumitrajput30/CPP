#include<iostream>
using namespace std;
class RBI
{
    public: msg()

    {
      cout<<"class RBI\n";

    }
    ~RBI()
    {
        cout<<"rbi delete\n";
    }
};
class SBI:public RBI

{
        public:info()

    {
      cout<<"class SBI\n";

    }

     ~SBI()
    {
        cout<<"SBI delete\n";
    }
};
int main()
{
    SBI customer;

}


