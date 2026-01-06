#include<stdio.h>
int main()
{
    int a[1000];
    int b=0,count=0;
    for(int i=0;i<1000;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0)
        {
            break;
        }
        else
        {
            b=b+a[i];
            count++;
        }
    }
    printf("sum:%d total:%d",b,count);
}