#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter any number : ");
    scanf("%d",&x);
    y=x/10;
    printf("Number without last digit is %d",y);
    return 0;
}