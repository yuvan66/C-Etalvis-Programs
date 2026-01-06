#include<stdio.h>
int main()
{
    int a[50]={0},b[50]={0},c[51]={0};
    int s,carry=0;
    for(int i=49;i>=0;i--)
    {
        c[i]=a[i]+b[i]+carry;
        carry=c[i]%10;
        c[0]=carry;
    }
    for(int i=0;i<50;i++)
    {
        printf("%d",c[i]);
    }
}