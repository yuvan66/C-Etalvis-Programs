#include<stdio.h>
int disp_LCM3(int,int,int );
int main()
{
    int x,y,z,s;
    printf("Enter the number 1 : ");
    scanf("%d",&x);
    printf("Enter the number 2 : ");
    scanf("%d",&y);
    printf("Enter the number 3 : ");
    scanf("%d",&z);
    s=disp_LCM3(x,y,z);
    printf("%d",s);
}
int disp_LCM3(int x,int y,int z)
{
    int a;
        if(x>y)
    {
        if(x>z)
        {
        a=x;
        }
    }
    else if(x>y)
    {
        if(z>x)
        {
        a=z;
        }
    }
    else
    {
        a=y;
    }
    while(a!=0)
    {
        if(a%x==0 && a%y==0 && a%z==0)
        {
            return a;
        }
        a++;
    }
}    
