#include<stdio.h>

//structure declaration
//there is no memory allocation at this point

struct demo
{
    int i;
    float f;
    int j;
    double d;

};

int main()
{
    //structure object /variable creation
    //memory gets allocated at this point 
    struct demo obj1;
    struct demo obj2;
    struct demo obj3;

    //member initialisation 
    obj1.d = 11.0;
    obj2.i = 5;
    obj3.j = 51;

    printf("size of obj1 : %d\n" , sizeof(obj1));  //20
    printf("size of obj2 : %d\n" , sizeof(obj2));  //20
    printf("i of obj2 : %d\n" , obj2.i);

    
    
    return 0;
}
