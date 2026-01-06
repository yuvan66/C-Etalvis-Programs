#include<string.h>
int main()
{
    int a[51];
    char b,c,d;
    char s[51];
    for(int i=0;i<7;i++)
    {
        scanf("%d",&a[i]);
    }
    for( c=0;c<7;c++)
    {
        b=a[c]+48;
        s[c]=b;
    }
    s[c]='\0';
    printf("%s",s);
}