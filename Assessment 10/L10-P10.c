#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000],d[1000];
    int b,e=0;
    fgets(a,sizeof(a),stdin);
    a[strcspn(a,"\n")]='\0';
    b=strlen(a);
    for(int i=b-1;i>=0;i--)
    {
        d[e]=a[i];
        e++;
    }
    d[e]='\0';
    printf("%s",d);
}