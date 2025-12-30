#include<stdio.h>
int main() {
    int a,b,c,d;
    scanf("%d", &a);
    b = a%10;
    b = b + ((a/10)%10);
    b = b + (a/100);
    c = b%10;
    c = c + b/10;
    d = c%10;
    d = d + c/10;
    printf("%d\n%d\n%d",b,c,d);
    return 0;
}