#include<stdio.h>
int main()
{
    int x=10,y,a=0;
    while(x<100)
    {
        if(x%2!=0)
        {
        y=(x/10);
        if(y==7)
        {
        a=a+x;
    }
}
        x++;
    }
    printf("%d",a);
}