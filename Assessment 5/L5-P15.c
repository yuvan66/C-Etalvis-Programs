#include<stdio.h>
int main()
{
    int x,y,z,a=1,b;
    printf("Enter a number : ");
    scanf("%d",&x);
    y=x%10;
    z=x;
    b=x;
    if(y%2!=0)
    {
    for(int i=0;z>=10;i++)
    {
      z=z/10;
        a=a*10;
    }
    b=x%a;
    printf("%d%d",z,b-1);
}
else
{
    printf("%d",b);
}
}