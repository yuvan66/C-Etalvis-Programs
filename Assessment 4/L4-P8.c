#include<stdio.h>
int main() {
    int a=24;
    loop: if (a<69)
    {
        if (((a/10)+(a%10))==6)
        {
            printf("%d\n",a);
        }
        a += 2;
        goto loop;
    }
    return 0;
}