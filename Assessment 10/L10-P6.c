#include<stdio.h>
int main()
{
    int a;
    int b,i,c,d=0,e;
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        d=(d*10)+b;
        a=a/10;
    }
   for(i=0;d!=0;i++)
    {
        c=d%10;
        printf("%c\n",c+48);
        d=d/10;
    }
}