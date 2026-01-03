#include<stdio.h>
int main()
{
    int x,y=0,z;
    printf("Enter a number : ");
    scanf("%d",&x);
    while(x!=0)
    {
        z=x%10;
        y=y+z;
        x=x/10;
    }
    printf("%d",y);
}