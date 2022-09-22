#include <iostream>

using namespace std;

class base
{
    public:
    int a;
    void display()
    {
        cout<<"Display the base: "<<a<<endl;
    }
};


class Derived : public base
{
public:
    void show()
    {
        cout<<"Show of Derived"<<endl;
    }
};
int main()
{
    Derived d;
    d.a=100;
    d.display();
    d.show();

    return 0;
}
