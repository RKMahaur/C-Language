//Write a program to check whether a given number is positive or non positive.

#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);
    if(a>0)
        printf("Positive Number");
    else
        printf("Non Positive");
    return 0;
}