#include<iostream>
using namespace std;

class base
{
    public:                       // access specifier
    int a,b;
    
    void fun()                    // function defination    1000
    {
        cout<<"base fun \n";
    }

    void gun (int i)              // function defination    2000
    {
        cout<<"base gun \n";
    }

    void gun(int  i , int j)      // overloaded function defination  3000
    {
        cout<<"base gun  with 2 integers \n";
    }

};

class derived : public base
{
    public:
    int x,y;
    void sun()                    // function defination     4000
    {
        cout<<"derived sun \n";
    }

    void fun()                     //function re-defination  5000
    {
        cout<<"derived fun \n";

    }

};

int main()
{
    derived dobj;
    dobj.fun();      // CALL - 5000
    dobj.gun(11);    // call - 2000
    dobj.gun(11 ,21); // call - 3000
    dobj.sun();      // call - 4000
    return 0;

}