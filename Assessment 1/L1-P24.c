#include<stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    printf("%d",a - ((((a%10)+(a/100))-1)%2)*5);
    return 0;
}