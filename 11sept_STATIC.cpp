#include<iostream>
using namespace std;

class demo
{
    public:   // access specifier 
    int i;   //instance variable
    int j;   //instance variable
    static int k; // class variable

    demo()     //default constructor
    {
        i=0;
        j=0;

    }

    demo(int a , int b)  //parameterised constructor
    {
        i = a;
        j = b;
    }

    void fun()     //instance method (function)
    {
        //static + non static
        cout<<"inside static method";
        
        cout<<"value of i :"<<this->i<<"\n";
        cout<<"value of j :"<<this->j<<"\n";
        cout<<"value of k :"<<k<<"\n";
        cout<<"value of l :"<<l<<"\n";

    }

    static void gun()  // class method
    {

    }

};

int demo::k = 0;

int main()
{
    /*demo obj;

    cout<<sizeof(obj);    // example  */

    //size of object is sumation of sizes of its non static characteristics
    //size of (obj) = sizeof (i)_+ sizeof (j) = 8

    cout<<"value of k :" <<demo::k<<"\n";   //0
    demo::gun();

    demo obj1(10,11);
    demo obj2(20,21);

    cout<<"value of i in obj1 :"<<obj1.i<<"\n"; //10
    cout<<"value of i in obj2 :"<<obj2.i<<"\n"; //20

    cout<<"value of j in obj1 :"<<obj1.j<<"\n"; //11
    cout<<"value of j in obj2 :"<<obj2.j<<"\n"; //21

    // cout<<sizeof(obj1);  

    obj1.fun();  //fun(&obj1)
    obj2.fun(); 


    
    return 0; 

}

