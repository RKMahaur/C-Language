#include<stdio.h>
int main()
{
    int r;
    float a;
    printf("Enter the radius of the circle : ");
    scanf("%d",&r);
    a=3.14*r*r;
    printf("Area of Circle is %.2f having the radius %d",a,r);
    return 0;
}