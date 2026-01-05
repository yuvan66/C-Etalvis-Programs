#include<stdio.h>
int disp_LCM2(int,int );
int main()
{
    int x,y;
    printf("Enter the number 1 : ");
    scanf("%d",&x);
    printf("Enter the number 2 : ");
    scanf("%d",&y);
    disp_LCM2(x,y);
}
int disp_LCM2(int x,int y)
{
    int z;
    if(x>y)
    {
        z=x;
    }
    else
    {
        z=y;
    }
    while(z!=0)
    {
        if(z%x==0 && z%y==0)
        {
            printf("%d",z);
            break;
        }
        z++;
    }
}