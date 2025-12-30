#include<stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    if ((a/10)<(a%10))
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }
    return 0;
}