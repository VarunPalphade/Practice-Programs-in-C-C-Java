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
    void fun()
    {
        cout<<"value of public i :"<<i<<"\n"; // A
        cout<<"value of public j :"<<j<<"\n"; // A
        cout<<"value of public k :"<<k<<"\n"; // A
    }

};

int main()
{
    base bobj;
    cout<<"value of public i :"<<bobj.i<<"\n"; // A
    //cout<<"value of public j :"<<bobj.j<<"\n"; // NA
    //cout<<"value of public k :"<<bobj.k<<"\n"; // Na

    bobj.fun();

    return 0;

}