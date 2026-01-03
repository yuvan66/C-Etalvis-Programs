#include<stdio.h>
int main()
{
    int x,y=0;
    printf("Enter a number : ");
    scanf("%d",&x);
    while(x!=0)
    {
        x=x/10;
        y++;
    }
    printf("%d",y);
}