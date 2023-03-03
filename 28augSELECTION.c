#include<stdio.h>
#include<stdbool.h>

bool checkeven(int ino)
{
    if((ino % 2) == 0)
    {
        return true;
    
    }
    else
    {
        return false;


    }

}

int main()
{
    int ivalue = 0;
    bool bret;

    printf("enter value \n");
    scanf("%d" , &ivalue);

    bret = checkeven(ivalue);
    if (bret == true)
    {
        printf("given value is even \n");
    }
    else 
    {
        printf("given value is odd \n");
    }

    return 0;

    
}