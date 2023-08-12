#include<stdio.h>
void main()
{
    int d,m,y;
    printf("Enter the date(DD/MM/YYYY) : ");
    scanf("%d/%d/%d",&d,&m,&y);

    printf("Day - %d ,Month - %d ,year - %d",d,m,y);
    return 0;
}