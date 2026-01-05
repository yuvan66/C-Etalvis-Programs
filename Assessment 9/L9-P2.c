#include<stdio.h>
int main()
{
    int c;
    int a[5];
    for(int i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
    c=c+a[i];    
    }
printf("\n%d",c/5);
}