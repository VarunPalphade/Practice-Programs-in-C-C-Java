//union and structure difference

#include<stdio.h>

struct demo
{
    int i ;
    float f;
    double d;
};

union hello
{
    int i;
    float f;
    double d;
};

int main()
{
    struct demo dobj;
    union hello hobj;

    printf("%d\n",sizeof(dobj));
    printf("%d\n",sizeof(hobj));
}
