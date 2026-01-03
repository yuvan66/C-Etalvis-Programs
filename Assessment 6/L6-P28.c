#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter the number 1 : ");
    scanf("%d",&x);
    printf("Enter the number 2 : ");
    scanf("%d",&y);
    if(x>y)
    {
        z=x;
    }
    else
    {
        z=y;
    }
    while(z!=0)
    {
        if(z%x==0 && z%y==0)
        {
            printf("%d",z);
            break;
        }
        z++;
    }
}