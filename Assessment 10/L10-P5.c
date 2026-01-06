#include<stdio.h>
int main()
{
    int a;
    int b,c=0,d,e,i;
    char s[1000],g;
    scanf("%d",&a);
    e=a;
    while(e!=0)
    {
    b=e%10;
    c=(c*10)+b;
    e=e/10;
    }
    for(i=0;c!=0;i++)
    {
        g=(c%10)+48;
        s[i]=g;
        c=c/10;
    }
    s[i]='\0';
    printf("%s",s);
}