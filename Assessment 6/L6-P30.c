#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter the number 1 : ");
    scanf("%d",&x);
    printf("Enter the number 2 : ");
    scanf("%d",&y);
    if (x>y)
    {
        z=y;
    }
    else
    {
        z=x;
    }
    while(z!=0)
    {
        if(x%z==0 && y%z==0)
        {
            printf("%d",z);
            break;
        }
        z--;
    }
}