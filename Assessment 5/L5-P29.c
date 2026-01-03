#include<stdio.h>
int main()
{
    int x,y,z,a;
    printf("Enter the number 1 : ");
    scanf("%d",&x);
    printf("Enter the number 2 : ");
    scanf("%d",&y);
    printf("Enter the number 3 : ");
    scanf("%d",&z);
    if(x>y)
    {
        if(z>x)
        {
        a=z;
        }
    }
    if(x>y)
    {
        if(z<x)
        {
            a=x;
        }
    }
    else
    {
        a=y;
    }
    for(int i=a;i!=0;i++)
    {
        if(i%x==0&&i%y==0&&i%z==0)
        {
           printf("%d",i);
           break;
        }
    }
}