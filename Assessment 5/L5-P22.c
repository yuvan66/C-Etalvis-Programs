#include<stdio.h>
int main()
{
    int x,y,z=0;
    printf("Enter  a number : ");
    scanf("%d",&x);
    for(int i=0;x>10;i++)
    {
        y=x%100;
        if(y%2!=0)
        {
            z++;
        }
        x=x/10;
    }
    printf("%d",z);
}