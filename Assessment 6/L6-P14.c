#include<stdio.h>
int main()
{
    int x,y=0,z,a=1,b,c,d;
    printf("Enter a number : ");
    scanf("%d",&x);
    z=x%10;
    c=x;
    while(x>10)
    {
        x=x/10;
        y=(y+1);
    }
    while(y!=0)
    {
        a=a*10;
        y--;
    }
    b=c%a;
    d=(((((a*z)+b))/10)*10)+x;
    printf("%d",d);
}