#include<stdio.h>
int main() {
    int a=6,s=0;
    loop: if (a>0)
    {
        s = s+a;
        a--;
        goto loop;
    }
    printf("%d\n",s);
    return 0;
}