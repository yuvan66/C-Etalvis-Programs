#include<stdio.h>
#include<string.h>
int main()
{
    char a[51];
    int b,c,d;
    int s[51];
    fgets(a,sizeof(a),stdin);
    a[strcspn(a,"\n")]='\0';
    b=strlen(a);
    for(int i=0;i<b;i++)
    {
        d=a[i]-48;
        s[i]=d;
    }
    for(int i=0;i<b;i++)
    {
    printf("%d",s[i]);
    }
}