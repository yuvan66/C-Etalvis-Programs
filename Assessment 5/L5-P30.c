#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter the number 1 : ");
    scanf("%d",&x);
    printf("Enter the number 2 : ");
    scanf("%d",&y);
    if(x<y)
    {
        z=x;
    }
    else
    {
        z=y;
    }
    for(int i=z;i!=0;i--)
    {
        if(x%i==0&&y%i==0)
        {
            printf("%d",i);
            break;
        }
    }
}