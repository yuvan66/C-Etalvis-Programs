#include<stdio.h>
int disp_interchange_first_last_digit(int,int,int );
int main()
{
    int x,y,z,l;
    printf("Enter a number : ");
    scanf("%d",&x);
    y=x%10;
    z=x;
    disp_interchange_first_last_digit(x,y,z);
}
int disp_interchange_first_last_digit(int x,int h,int z)
{
    int a,b,c,d;
    if(h%2!=0)
    {
        while(x>10)
        {
            x=x/10;
            a++;
        }
        x=x-1;   
    while(a!=0)
    {
        b=b*10;
        a--;
    }
    c=z%b;;
    d=((((b*x)+c)/10)*10)+h;
    printf("%d",d);
}
else
{
    printf("%d",x);
}
}