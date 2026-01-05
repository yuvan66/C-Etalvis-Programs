#include<stdio.h>
int disp_single_digit_square(int );
int main()
{
    int x,s;
    printf("Enter a number : ");
    scanf("%d",&x);
    s=disp_single_digit_square(x);
    printf("%d",s);
}
int disp_single_digit_square(int x)
{
int a,y=1,z,b=0;
    while(x!=0)
    {
        a=x%10;
        y=1;
    while(y<10)
    {
        z=y*y;
        if(z==a)
        {
            b++;
        }
        y++;
    }
    x=x/10;
}
return b;
}