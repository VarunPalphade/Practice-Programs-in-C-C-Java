#include<stdio.h>

int main()
{
    int *p = NULL;

    int size = 0;

    printf("enter the size \n");
    scanf("%d" , &size);  //5

    p = (int *)malloc (sizeof(int)* size);   // malloc syntax    malloc(4*5)  = 20
    p = (int *)calloc (sizeof(int), size);   // calloc syntax    calloc(4 , 5)

    return 0;
}



// void * malloc(int size);
// void * calloc(int size , int elements);