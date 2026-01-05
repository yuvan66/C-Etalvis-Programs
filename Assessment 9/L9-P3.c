#include<stdio.h>
int main()
{
    int a[5];
    for(int i=0;i<=4;i++)
    {
    scanf("%d",&a[i]);   
    }
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
printf("%d",a[0]);
}