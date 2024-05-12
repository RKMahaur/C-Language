//Write a program to calculate average of three integers. Number are given by the user.
#include<stdio.h>
int main()
{
    float x,y,z,avg;
    printf("Enter the first number : ");
    scanf("%f",&x);
    printf("Enter the second number : ");
    scanf("%f",&y);
    printf("Enter the third number : ");
    scanf("%f",&z);
    avg=(x+y+z)/3;
    printf("Average of %.2f, %.2f, %.2f is %.2f",x,y,z,avg);
    return 0;
}