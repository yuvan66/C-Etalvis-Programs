#include<stdio.h>
int main()
{
    int a[1000],s[1000];
    int b=0,count=0,c,d=0,e;
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
    for(int i=0;i<count;i++)
    {
        e=a[i];
        d=0;
        while(e!=0)
        {
        c=e%10;
        d=d+c;
        e=e/10;
        }
        s[i]=d;
    }
    for(int i=0;i<count;i++)
    {
        for(int j=i+1;j<count;j++)
        {
            if(s[i]>s[j])
            {
                int temp = s[i];
                s[i] = s[j];
                s[j] = temp; 
            }
        }
    }
    for(int i=0;i<count;i++)
    {
    printf("%d ",s[i]);
    }
}