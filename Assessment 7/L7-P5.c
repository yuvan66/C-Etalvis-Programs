#include<stdio.h>
int disp_odd(int );
int main()
{
    int x=1;
    disp_odd(x);
}
int disp_odd(int z)
{
    while(z<10)
    {
        if(z%2!=0)
        {
            printf("%d\n",z);
        }
        z++;
    }
}