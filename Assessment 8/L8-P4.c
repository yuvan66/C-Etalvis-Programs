#include<stdio.h>
int disp_2digit_odd_sum_tens7(int );
int main()
{
    int x=10,y;
    y=disp_2digit_odd_sum_tens7(x);
    printf("%d",y);
}
int disp_2digit_odd_sum_tens7(int x)
{
    int z,a=0;
    while(x<=99)
    {
        if(x%2!=0)
        {
        z=x/10;
        if(z==7)
        {
            a=a+x;
        }
    }
        x++;
    }
    return a;
}
