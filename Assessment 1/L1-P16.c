#include<stdio.h>
int main() {
    int a,b;
    scanf("%d", &a);
    b = (a%10)*10;
    b = b + ((a/10)%10);
    printf("%d",b + ((a/100)*100));
    return 0;
}