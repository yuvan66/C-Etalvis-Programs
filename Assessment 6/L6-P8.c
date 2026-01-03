#include<stdio.h>
int main()
{
    int x=10,y,z;
    while(x<100)
    {
        if(x%2==0)
        {
        y=x%10;
        z=x/10;
        if(y+z==6)
        {
            printf("%d\n",x);
        }
    }
        x++;
    }
}