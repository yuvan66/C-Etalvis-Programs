#include<stdio.h>
int disp_sum ();
int main()
{
    int x=1;
    printf("%d",disp_sum(x));
}
disp_sum (int x)
{
    int s=0;
    while (x<6)
    {
        s = s + x;
        x++;
    }
    return s;
}