#include<stdio.h>
int disp_reverse_number(int );
int main()
{
    int x,y=0;
    printf("Enter a number : ");
    scanf("%d",&x);
    disp_reverse_number(x);
}
int disp_reverse_number(int x)
{
    int z,y;
    while(x!=0)
    {
        z=x%10;
        y=(y*10)+z;
        x=x/10;
    }
    printf("%d",y);
}