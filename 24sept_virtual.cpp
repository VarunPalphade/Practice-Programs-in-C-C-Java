#include<iostream>
using namespace std;

class base
{
    public:
    int a,b;
    void fun () 
    {
        cout<<"base fun \n";
    }
    virtual void gun()
    {
        cout<<"base gun \n";
    }
    virtual void sun()
    {
        cout<<"base sun \n";
    }
    
    

};


class derived : public base
{
    public:
    int x,y;
    void gun()    {cout<<"derived gun \n"; }
    void run()    {cout<<"derived run \n";}
    virtual void mun()    {cout<<"derived mun \n";}

};

int main()
{
    
    base *bp = NULL;
    derived dobj;
    bp = & dobj;

    bp->fun();
    bp->gun();
    bp->sun();

    return 0;

}