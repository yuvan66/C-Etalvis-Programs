#include<stdio.h>//total number of single digit prime number.
int main()
{
    int i,x,y=0;
    for(i=2;i<10;i++)
    {
        x=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
               x=1; 
               break;
            }
        }
        if(x==0)
        {
            y++;
        }
    }
    printf("\n%d",y);
}