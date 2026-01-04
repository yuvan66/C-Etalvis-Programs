#include<stdio.h>
int disp_2digit_odd_sum7(int );
int main()
{
    int x=10;
    disp_2digit_odd_sum7(x);
}
int disp_2digit_odd_sum7(int x)
{
    int y,z;
   while(x<100)
    {
        if(x%2!=0)
        {
        y=x%10;
        z=x/10;
        if(y+z==7)
        {
            printf("%d\n",x);
        }
    }
        x++;
    }
}