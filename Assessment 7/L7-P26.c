#include<stdio.h>
int disp_biggest_4digit_div7_9(int );
int main()
{
    int x=9999;
    disp_biggest_4digit_div7_9(x);
}
int disp_biggest_4digit_div7_9(int x)
{
      while(x!=0)
    {
        if(x%7==0 && x%9==0)
        {
            printf("%d",x);
            break;
        }
        x--;
    }
}