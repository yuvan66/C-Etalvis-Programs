#include<stdio.h>
int main()
{
    char a[1000];
    fgets(a,1000,stdin);
    printf("%s",a);    
}