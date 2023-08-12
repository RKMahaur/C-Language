#include<stdio.h>
int main()
{
    int x;
    char ch;
    printf("Enter any character : ");
    scanf("%c",&ch);
    x=sizeof(ch);
    printf("Size of character constant is %d",x);
    return 0;
}