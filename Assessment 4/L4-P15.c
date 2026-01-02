#include <stdio.h>

int main() {
    int a, b, c, d, e, f;
    scanf("%d", &a);
    b = a;
    c = 0;
count:
    if (b != 0) {
        c++;
        b /= 10;
        goto count;
    }
    d = 1;
    e = c;
power:
    if (e > 1) {
        d *= 10;
        e--;
        goto power;
    }
    f = a / d;
    if (f % 2 == 0) goto print;
    f -= 1;
    b = a % d;
    a = f * d + b;
print:
    printf("%d\n", a);
    return 0;
}
