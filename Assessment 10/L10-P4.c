#include<stdio.h>
int main()
{
    char a[1000];
    fgets(a,1000,stdin);
    for(int i=0;a[i]!='\0';i++)
    { 
    if(a[i]!='\n')
    {
    printf("%d ",a[i]-48);
    }  
    }
}