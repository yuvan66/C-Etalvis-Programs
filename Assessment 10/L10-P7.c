#include<stdio.h>
int main()
{
    int count=0;
    char a[1000];
    fgets(a,1000,stdin);
    for(int i=0;a[i]!='\0';i++)
    {
        count++;
    }
    printf("%d",count);
}