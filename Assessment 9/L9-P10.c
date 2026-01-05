#include<stdio.h>
int main()
{
    int a[5];
    int s[5];
    int b,c,d=0;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
        c=0;
    for(int j=0;a[i]!=0;j++)
        {
        b=a[i]%10;
        c=(c*10)+b;
        a[i]=a[i]/10;
        }
        s[i]=c;
    }
    for(int i=0;i<5;i++)
    {
        d=d+s[i];
    }
    for(int i=0;i<5;i++)
    {
        printf("%d",s[i]);
    }
    printf("%d",d);
}