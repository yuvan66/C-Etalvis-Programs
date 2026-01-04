#include<stdio.h>
int disp_sum_all_digits(int );
int main()
{
    int x,y=0;
    printf("Enter a number : ");
    scanf("%d",&x);
    disp_sum_all_digits(x);
}
int disp_sum_all_digits(int x)
{
    int z,y=0;
        while(x!=0)
    {
        z=x%10;
        y=y+z;
        x=x/10;
    }
    printf("%d",y);
}