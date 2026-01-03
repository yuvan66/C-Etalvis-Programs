#include<stdio.h>
int main()
{
    int x,y,z=0;
    printf("Enter a four digit number : ");
    scanf("%d",&x);
    x=x/10;
    y=x%100;
    for(int i=2;i<y;i++)
    {
        if(y%i==0)
        {
            z=1;
            break;
        }
    }
    if(z==0)
    {
        printf("Prime");
    }
    else
    {
        printf("Not prime");
    }
}