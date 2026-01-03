#include<stdio.h>//less than 100000 sum of digit is 14.
int main()
{
    int i,x,y,z=0,a=0;
    for(i=0;i<=100000;i++)
    {
        z=0;
        x=i;
        for(int j=0;x!=0;j++)
        {
            y=x%10;
            z=z+y;
            x=x/10;
        }
        if(z==14)
        {
           a++;
        }
    }
    printf("%d",a);
}