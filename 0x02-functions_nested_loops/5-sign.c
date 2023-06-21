#include <stdio.h>

int print_sign(int n) {
    if (n > 0) {
        putchar('+');
        return 1;
    } else if (n == 0) {
        putchar('0');
        return 0;
    } else {
        putchar('-');
        return -1;
    }
}

int main() {
    int num = 10;
    int sign = print_sign(num);
    printf("\nSign: %d\n", sign);

    num = 0;
    sign = print_sign(num);
    printf("\nSign: %d\n", sign);

    num = -5;
    sign = print_sign(num);
    printf("\nSign: %d\n", sign);

    return 0;
}
