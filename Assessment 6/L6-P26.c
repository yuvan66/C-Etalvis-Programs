#include<stdio.h>
int main()
{
    int x=9999;
    while(x!=0)
    {
        if(x%7==0 && x%9==0)
        {
            printf("%d",x);
            break;
        }
        x--;
    }
}