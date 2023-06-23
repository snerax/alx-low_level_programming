#include <stdio.h>

int _isupper(int c) {
    if (c >= 'A' && c <= 'Z') {
        return 1; // uppercase
    } else {
        return 0; // not uppercase
    }
}

int main() {
    int ch1 = 'A';
    int ch2 = 'a';
    int ch3 = '1';
    int ch4 = '!';

    printf("%d\n", _isupper(ch1)); // 1 (true)
    printf("%d\n", _isupper(ch2)); // 0 (false)
    printf("%d\n", _isupper(ch3)); // 0 (false)
    printf("%d\n", _isupper(ch4)); // 0 (false)

    return 0;
}
