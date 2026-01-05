#include<stdio.h>
int disp_count_sum_14(int );
int main()
{
    int x=99999;
    disp_count_sum_14(x);
}
int disp_count_sum_14(int x)
{
    int y,z=0,a=0,b;
    while(x>0)
    {
        b=x;
        z=0;
        while(b!=0)
        {
        y=b%10;
        z=z+y;
        b=b/10;
        }
        if(z==14)
        {
            a++;
        }
        x--;
    }
    printf("%d\n",a);
}