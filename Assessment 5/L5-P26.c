#include<stdio.h>//Biggest four digit number divisible by 7 and 9.
int main()
{
    int i;
    for(i=9999;i>=0;i--)
    {
        if(i%7==0&&i%9==0)
        {
            printf("%d",i);
            break;
        }
    }
}