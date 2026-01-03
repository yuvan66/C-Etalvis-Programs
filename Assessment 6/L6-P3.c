#include<stdio.h>
int main()
{
    int x=1,y=0;
    while(x<=5)
    {
        y=y+x;
        x++;
    }
    printf("%d",y);
}