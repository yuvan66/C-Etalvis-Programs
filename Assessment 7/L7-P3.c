#include<stdio.h>
void disp_sum(int);
int main()
{
    int x=1;
    disp_sum(x);
}
void disp_sum(int z)
{
    int y=0;
    while(z<=5)
    {
        y=y+z;
        z++;
    }
    printf("%d",y);
}