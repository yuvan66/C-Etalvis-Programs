#include<stdio.h>
int main() {
    int a,b;
    scanf("%d", &a);
    b = (a%10)*10;
    a = a/10;
    b = b + (a%10);
    a = (a/10)*100 + b;
    printf("%d", a);
    return 0;
}