#include<stdio.h>
int main()
{
    int x=6,y=0;
    while(x>=1)
    {
        y=y+x;
        x--;
    }
    printf("%d",y);
}