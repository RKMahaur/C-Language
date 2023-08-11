#include<stdio.h>
void main()
{
    int hr,min;
    printf("Enter time (HH:MM) : ");
    scanf("%d:%d",&hr,&min);
    printf("%d hour and %d minute",hr,min);
    return 0;
}