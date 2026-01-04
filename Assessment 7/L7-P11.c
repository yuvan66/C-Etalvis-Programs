#include<stdio.h>
int disp_2digit_odd_sum_tens7(int );
int main()
{
    int x,y=0;
    printf("Enter a number : ");
    scanf("%d",&x);
    disp_2digit_odd_sum_tens7(x);
}
int disp_2digit_odd_sum_tens7(int x)
{
    int y;
    while(x!=0)
    {
        x=x/10;
        y++;
    }
    printf("%d",y);
}