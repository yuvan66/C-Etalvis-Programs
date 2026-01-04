#include<stdio.h>
int disp_2digit_odd_below20(int );
int main()
{
    int x=11;
    disp_2digit_odd_below20(x);
}
int disp_2digit_odd_below20(int z)
{
    while(z<20)
    {
        if(z%2!=0)
        {
            printf("%d\n",z);
        }
        z++;
    }
}