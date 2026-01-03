#include<stdio.h>
int main()
{
    int x,y,z=0;
    printf("Enter a number : ");
    scanf("%d",&x);
    while(x>10)
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