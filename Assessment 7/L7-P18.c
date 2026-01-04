#include<stdio.h>
int disp_interchange_first_last_digit(int, int );
int main()
{
    int x,y;
    printf("Enter a number : ");
    scanf("%d",&x);
    y=x%100;
    disp_interchange_first_last_digit(x,y);
}
int disp_interchange_first_last_digit(int x,int h)
{
    int z=0;
        while(h!=x)
    {
        if(x%h==0)
        {
            z=1;
            break;
        }
        h++;
    }
    if(z==0)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}