#include<stdio.h>
int main()
{
    int a[5];
    int b[5];
    int n=5;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            for(int j=i;j<n-1;j++)
            {
            a[j]=a[j+1];
            }
            n--;
            i--;

        }

    }
    for(int i=0;i<n;i++)
    {
    b[i]=a[i];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",b[i]);
    }
}