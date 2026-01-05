#include<stdio.h>
int disp_count_HCF2(int,int );
int main()
{
    int x,y,s;
    printf("Enter the number 1 : ");
    scanf("%d",&x);
    printf("Enter the number 2 : ");
    scanf("%d",&y);
    s=disp_count_HCF2(x,y);
    printf("%d",s);
}
int disp_count_HCF2(int x,int y)
{
    int z=0;
    if (x>y)
    {
        z=y;
    }
    else
    {
        z=x;
    }
    while(z!=0)
    {
        if(x%z==0 && y%z==0)
        {
            return z;
        }
        z--;
    }
}