#include<stdio.h>//check prime and sum of digit is equal to 14.
int main()
{
    int x,y,z=0;
    printf("Enter a number : ");
    scanf("%d",&x);
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
            {
                y=1;
                break;
            }
    }
    for(int i=0;x!=0;i++)
    {
        z=(x%10)+z;
        x=x/10;
    }
    if(y==0)
    {
        printf("Prime & ");
    }
    else
    {
        printf("Not prime & ");
    }
    if(z==14)
    {
        printf("Sum of digit is 14");
    }
    else
    {
        printf("Sum of digit is not 14");
    }
}