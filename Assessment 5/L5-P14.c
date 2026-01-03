#include <stdio.h>

int main() {
    int n, temp, digits = 0, pow = 1;
    int first, last, middle, result;

    scanf("%d", &n);

    temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    for (int i = 1; i < digits; i++) {
        pow *= 10;
    }

    first = n / pow;
    last = n % 10;
    middle = (n % pow) / 10;

    result = last * pow + middle * 10 + first;

    printf("%d\n", result);
    return 0;
}