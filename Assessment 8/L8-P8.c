#include <stdio.h>

int disp_interchange_first_last_digit(int a) {
    int b = a, c = 0, d = 1;
    int e, f, g, h;
    while (b != 0) {
        c++;
        b /= 10;
    }
    for (int i = 1; i < c; i++) {
        d *= 10;
    }
    e = a / d;          
    f = a % 10;       
    g = (a % d) / 10;   
    h = f * d + g * 10 + e;
    return h;
}
int main() {
    int a, result;
    scanf("%d", &a);
    result = disp_interchange_first_last_digit(a);
    printf("%d\n", result);
    return 0;
}