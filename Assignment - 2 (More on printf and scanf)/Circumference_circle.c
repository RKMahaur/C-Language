#include<stdio.h>
int main()
{
    float C,r;
    printf("Enter the Radius : ");
    scanf("%f",&r);

    C=2*3.14*r;
    printf("Circumference of circle is %.2f",C);
    return 0;
}