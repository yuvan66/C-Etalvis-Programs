#include<stdio.h>
int main()
{
    int x,y,z,a=0;
    printf("Enter a number : ");
    scanf("%d",&x);
    for(int k=0;x!=0;k++)
    {
        y=x%10;
        x=x/10;
    for(int i=1;i<10;i++)
    {
        for(int j=i;j<=i;j++)
        {
        z=i*j;
        if(z==y)
        {
            a++;
        }
        }  
    }  
}
printf("%d",a);
}