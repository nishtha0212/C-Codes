#include<stdio.h>

void main()
{
    int a,b,c;
    printf("Enter 2 nos.: ");
    scanf("%d%d",&a,&b);
    printf("BEFORE SWAPPING\n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    c=a;
    a=b;
    b=c;
    printf("AFTER SWAPPING\n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);
}
