#include<iostream>
using namespace std;
#include<string.h>
class cybrom
{
    char *name;
    public:cybrom(char *n)

    {   name=new char[20];
        strcpy(name,n);
    }
    void show()
    {
        cout<<"Name="<<name<<"\n";
    }

    void merges(char *c)
    {
        strcat(name,c);

    }
};
int main()
{
    cybrom c1("sumit");
    cybrom c2(c1);
    c1.show();
    c2.show();
    c1.merges(" Rajput");
    c1.show();
    c2.show();
}
