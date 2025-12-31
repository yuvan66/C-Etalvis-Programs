#include<stdio.h>
int main() {
    int a,s=0;
    scanf("%d",&a);    
    loop: if (a!=0)
    {
        s = s + (a%10);
        s = s*10;
        a= a/10;
        goto loop;
    }
    printf("%d",s/10);
    return 0;
}