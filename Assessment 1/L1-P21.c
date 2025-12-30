#include<stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    printf("%d", a - 5*(a%2));
    return 0;
}