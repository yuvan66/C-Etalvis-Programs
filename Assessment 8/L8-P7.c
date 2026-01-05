#include<stdio.h>
int disp_reverse_number(int );
int main()
{
    int x,y;
    printf("Enter a number : ");
    scanf("%d",&x);
    y=disp_reverse_number(x);
    printf("%d",y);
}
int disp_reverse_number(int x)
{
    int z,a=0;
    while(x!=0)
    {
        z=x%10;
        a=(a*10)+z;
        x=x/10;   
    }
    return a;
}