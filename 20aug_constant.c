#include<stdio.h>

int main()
{

    int no1 = 10;
    const int no2 = 10;

    printf("%d\n" , no1);
    printf("%d\n" , no2);


    no1++;
    no2++;    //error will come because no2 is constant at line 6
    
    no1 = 20;   // A
    no2 = 20;   // NA
    return 0 ;

}
