#include<stdio.h>
int disp_single_digit_prime(int );
int main()
{
    int x,s;
    printf("Enter a number : ");
    scanf("%d",&x);
    s=disp_single_digit_prime(x);
    printf("%d",s);
}
int disp_single_digit_prime(int x)
{
    int  y,z,a,b,c=0;
       while(x!=0)
    {
        y=x%10;
        b=0;
        a=2;
        if(y>1)
        {
        while(a<y)
        {
            z=y%a;
            if(z==0)
            {
                b=1;
                break;
            }
            a++;
        }
        if(b==0)
        {
            c++;
        }
    }
        x=x/10;
                }
    return c;
}