// accept n numbers from user and perform addition
// value of n = 5
//values : 

//output :

/* Algorithm
START

accept the elements form user
allocate memory to store the data
accept the numbers from user
perform addition to all numbers
display addition of all numbers

END
*/

#include<stdio.h>    //for printf scanf etc
#include<stdlib.h>  // for malloc and free

int main()
{
    int *arr = NULL;    // pointer to hold the address of array 
    int isize = 0;      // variable to hold size of arrray
    int i = 0;          // loop counter
    int isum = 0;       // sum of numbers 

    printf("how many elements you want \n");
    scanf("%d", &isize);

    // allocate the memory

    arr = (int *)malloc(isize * sizeof(int));

    printf("enter the elements \n");

    for(i = 0 ; i < isize; i++)
    {
        scanf("%d" , &arr[i]);

    }

    //perform addition
    for(i = 0 ; i < isize ; i++)
    {
        isum = isum + arr[i];
    }   
    
    printf("addiiton is : %d \n " , isum);

    free(arr);

    return 0;
}
