#include<stdio.h>
int main()
{
    int a,a1,b,c;
    scanf("%d",&a);\
    a1 = a;
    b = a%10;
    loop: if (a!=0)
    {
        c += 1;
        a = a/10;
        goto loop;
    }
    printf("%d",c);
    return 0;
}