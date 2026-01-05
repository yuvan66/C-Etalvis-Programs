#include<stdio.h>
int disp_sum_all_digits(int );
int main()
{
    int x,y;
    printf("Enter a number : ");
    scanf("%d",&x);
    y=disp_sum_all_digits(x);
    printf("%d",y);
}
int disp_sum_all_digits(int x)
{
    int z,a=0;
    while(x!=0)
    {
        z=x%10;
        a=a+z;
        x=x/10;   
    }
    return a;
}