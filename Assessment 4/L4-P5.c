#include<stdio.h>
int main() {
    int a=1;
    loop: if (a<10)
    {
        printf("%d\n",a);
        a += 2;
        goto loop;
    }
    return 0;
}