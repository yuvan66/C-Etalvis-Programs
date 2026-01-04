#include<stdio.h>
int disp_2digit_ones5(int );
int main()
{
    int x=10;
    disp_2digit_ones5(x);
}
int disp_2digit_ones5(int x)
{
    int a=0,y;
    while(x<100)
    {
        y=x%10;
        if(y==5)
        {
        a=a+x;
    }
        x++;
    }
    printf("%d",a);
}