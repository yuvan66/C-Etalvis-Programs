#include <stdio.h>

int main() {
    int i, a, b;
    for (i = 10; i < 100; i++) {
        a = i / 10;   // tens digit
        b = i % 10;   // ones digit
        if (i % 2 != 0 && (a + b == 7)) {
            printf("%d\n", i);
        }
    }
    return 0;
}

