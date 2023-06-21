#include <stdio.h>
#include "sign.h"

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

