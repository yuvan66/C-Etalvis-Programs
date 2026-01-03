#include<stdio.h>
int main()
{
    int x,y,z=0;
    printf("Enter a four digit number : ");
    scanf("%d",&x);
    x=x/10;
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