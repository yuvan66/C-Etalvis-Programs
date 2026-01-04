#include<stdio.h>
int check_prime(int );
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    check_prime(x);
}
int check_prime(int x)
{
    int y=2,z=0;
    while(y!=x)
    {
        if(x%y==0)
        {
            z=1;
            break;
        }
        y++;
    }
    if(z==0)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}