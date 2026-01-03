#include<stdio.h>//total number of digits in odd number.
int main()
{
    int x,y,z=0;
    printf("Enter  a number : ");
    scanf("%d",&x);
    for(int i=0;x!=0;i++)
    {
        y=x%2;
        if(y!=0)
        {
            z++;
        }
        x=x/10;
    }
    printf("%d",z);
}