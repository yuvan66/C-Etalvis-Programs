#include<stdio.h>
#include<string.h>
int main()
{
    int i,b;
    char a[51];
    fgets(a,sizeof(a),stdin);
    b=strlen(a);
    for(i=0;i<b;i++)
    {
        if(a[i]!=48)
        {
            break;
        }
    }
    for(int j=i;a[j]!='\0';j++)
    {
        printf("%c",a[j]);
    }
}