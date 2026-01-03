#include<stdio.h>
int main()
{
    int x=2,y,a=0,z=0;
    while(x<10)
    {
        a=0;
        y=2;
        while(y<x)
        {
            if(x%y==0)
            {
                a=1;
                break;
            }
            y++;
        }
        if(a==0)
        {
            z++;
        }
        x++;
    }
    printf("%d",z);
}