#include<stdio.h>
int main()
{
    int x,y,z,a=0,b=1,c,d;
    printf("Enter an number : ");
    scanf("%d",&x);
    y=x%10;
    z=x;
    if(y%2!=0)
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
    d=((((b*x)+c)/10)*10)+y;
    printf("%d",d);
}
else
{
    printf("%d",x);
}
}