#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    a=a+b-(b=a);
    printf("values after swap are %d and %d.",a,b);
    return 0;
}
