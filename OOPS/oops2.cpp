#include<iostream>
using namespace std;
class cybrom
{
    int c;
    public:int sum(int x, int y)
    {
        c= x+y;
        return c;
    }
    void show()
    {
        cout<<c;
    }
};

  int main()

  {
      cybrom obj;
      cout<<obj.sum(2,5);
      obj.show();
  }
