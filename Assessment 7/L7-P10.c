#include<stdio.h>
int disp_2digit_odd_sum_tens7(int );
int main()
{
    int x=10;
    disp_2digit_odd_sum_tens7(x);
}
int disp_2digit_odd_sum_tens7(int x)
{
    int y,a=0;
    while(x<100)
    {
        if(x%2!=0)
        {
        y=(x/10);
        if(y==7)
        {
        a=a+x;
    }
}
        x++;
    }
    printf("%d",a);
}