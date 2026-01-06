#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int* y;
    y = &x;
    *y= *y + 2;
    printf("%d",x);
}