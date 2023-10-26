#include <stdio.h>

int main()
{
int a=10,b=20;
int *ptr, *ptr1;
ptr = &a;
ptr1 = &b;
swapv(&a,&b);
printf("%d %d ",a,b);
    return 0;
}

void swapv(int *x, int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
    printf("%d %d \n",*x,*y);
}


