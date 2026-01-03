#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d", &a);
    if (a <= 1) goto notprime;
    b = 2;
check:
    if (b <= a / 2) {
        if (a % b == 0) goto notprime;
        b++;
        goto check;
    }
    goto prime;
notprime:
    printf("Not Prime\n");
    return 0;
prime:
    printf("Prime\n");
    return 0;
}
