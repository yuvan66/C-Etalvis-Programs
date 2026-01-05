#include<stdio.h>
int count_total_digits(int );
int main()
{
    int x,y;
    printf("Enter a number : ");
    scanf("%d",&x);
    y=count_total_digits(x);
    printf("%d",y);
}
int count_total_digits(int x)
{
    int z,a=0;
    while(x!=0)
    {
        z=x%10;
        a++;
        x=x/10;   
    }
    return a;
}