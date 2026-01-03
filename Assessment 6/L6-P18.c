#include<stdio.h>
int main()
{
    int x,y,z=0;
    printf("Enter a number : ");
    scanf("%d",&x);
    y=x%100;
    while(y!=x)
    {
        if(x%y==0)
        {
            z=1;
            break;
        }
        y++;
    }
    if(z==0)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}