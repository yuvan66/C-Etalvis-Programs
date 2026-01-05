
#include<stdio.h>
int disp_2digit_ones5 ();
int main()
{
    printf("%d",disp_2digit_ones5());
}
disp_2digit_ones5 ()
{
    int x=15,s=0;
    while (x<96)
    {
        if (x%10==5)
        {
            s=s+x;
        }
        x++;
    }
    return s;
}