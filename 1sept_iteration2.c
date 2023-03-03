#include<stdio.h>

/*

int main()
{
    int Arr[4] = {11,21,31,41};

    printf("elements of array are : \n");

    printf("%d\n" , Arr[0]);
    printf("%d\n" , Arr[1]);
    printf("%d\n" , Arr[2]);
    printf("%d\n" , Arr[3]);

    return 0;
}
// this program is by SEQUENCE method
*/

int main()
{
    
    int Arr[4] = {11,21,31,41};

    int icnt = 0; // loop counter

    printf("elements of array are : \n");
    
    //      1       2       3
    for (icnt=0; icnt<=3; icnt++)
    {
        printf("%d\n" , Arr[icnt]);  //4
    }
    


    return 0;

}   //this is by iteration method5


