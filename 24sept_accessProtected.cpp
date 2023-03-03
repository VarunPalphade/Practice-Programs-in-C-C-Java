#include<iostream>
using namespace std;

class base
{
    public:
    int i;
    private:
    int j;
    protected:
    int k;
    public:
    base()
    {
        i = 10;
        j = 20;
        k = 30;
    }
};

class derived : public base
{
    public:
    void fun()
    {
        cout<<"value of public i of base :"<<i<<"\n"; //A
        //cout<<"value of private j of base :"<<j<<"\n"; //NA
        cout<<"value of protected k of base :"<<k<<"\n"; //A
    }
};

int main()
{
    derived dobj;

    dobj.fun();

    return 0;
}