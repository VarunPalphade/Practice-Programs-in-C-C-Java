#include<iostream>
using namespace std;

class overloading
{
    public:
    // add@2ii  
    int add (int a, int b)             //1000
    {
        cout<<"addition of 2 integers \n";
        return a+b;
    }
    // add@2ff
    float add(float a , float b)        //2000
    {
        cout<<"addition of float \n";

    }
    // add@2dd
    double add(double a , double b)     //3000
    {
        cout<<"addition of double \n";
    }
     //add@3iii
    int add(int a , int b, int c)        //4000
    {
        cout<<"addition of 3 int \n";
        return a+b+c;
    }

    void fun(int a , float b)
    {}

    void fun(float x , int y)
    {}
    
};

int main()
{
    overloading obj;

    obj.add(11,21);        // call 1000 
    obj.add(11,21,41);     // call 4000
    

    return 0;

}