#include<stdio.h>
int main()
{
    int x,y=1,z,a,b=0;
    printf("Enter a number : ");
    scanf("%d",&x);
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
printf("%d",b);
}