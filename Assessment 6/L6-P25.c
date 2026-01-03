#include<stdio.h>
int main()
{
    int x,y,z,a,b,c=0;
    printf("Enter a number : ");
    scanf("%d",&x);
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
    printf("%d",c);
}