#include<stdio.h>//check whether the last two digits are prime.
int main()
{
    int x,y,z=0;
    printf("Enter a number : ");
    scanf("%d",&x);
     y=x%100;
    for(int i=2;i<y;i++)
    {
        if(x%i==0)
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