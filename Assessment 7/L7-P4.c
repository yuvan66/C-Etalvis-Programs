#include<stdio.h>
int disp_rsum(int );
int main()
{
    int x=6,y;
    disp_rsum(x);
}
int disp_rsum(int z)
{
    int y=0;
    while(z>=1)
    {
        y=y+z;
        z--;
    }
    printf("%d",y);
}