#include<stdio.h>//number of single digit prime number in the input.
int main()
{
    int x,y=0,z=0,a;
    printf("Enter a number : ");
    scanf("%d",&x);
    for(int i=0 ;x!=0; i++)
    { 
        a=x%10;
        x=x/10;
        z=0;
        if(a!=1)
        {
        for(int j=2;j<a;j++)
        {
            
            if(a%j==0)
            {
                z=1;
                break;
            }
        }
        if(z==0)
        {
           y++;
        }
        else
        {
            z=1;
        }
    }
}
    printf("%d",y);
}