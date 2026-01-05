#include<stdio.h>
int disp_total_odd_digits(int );
int main()
{
    int x,a;
    printf("Enter a number : ");
    scanf("%d",&x);
    a=disp_total_odd_digits(x);
    printf("%d",a);
}
int disp_total_odd_digits(int x)
{
    int y,z=0;
    while(x!=0)
    {
        y=x%10;
        if(y%2!=0)
        {
            z++;
        }
        x=x/10;
    }
    return z;
}