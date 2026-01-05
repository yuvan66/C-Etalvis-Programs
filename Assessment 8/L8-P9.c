#include <stdio.h>

int check_last_digit_odd(int a) {
    int b = a, c = 0, d = 1, e, f, g;
    while (b != 0) {
        c++;
        b /= 10;
    }
    for (int i = 1; i < c; i++) {
        d *= 10;
    }
    e = a / d;
    if (e % 2 == 0) {
        return a;
    } else {
        f = e - 1;
        g = a % d;
        return f * d + g;
    }
}

int main() {
    int a;
    scanf("%d", &a);
    printf("%d\n", check_last_digit_odd(a));
    return 0;
}
