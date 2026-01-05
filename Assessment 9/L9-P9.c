#include<stdio.h>
int main()
{
    int a[5];
    int b[5];
    int n=5;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=2;j<i;j++)
        {
        if(a[i]%j!=0)
        {
            for(int k=i;k<n-1;k++)
            {
                a[k]=a[k+1];
            }
            n--;
            i--;
        }
    }
}
    for(int i=0;i<n;i++)
    {
    b[i]=a[i];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\n",b[i]);
    }
}