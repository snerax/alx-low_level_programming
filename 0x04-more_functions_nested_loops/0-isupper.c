#include <stdio.h>

int is_uppercase(char character) {
    if (character >= 'A' && character <= 'Z') {
        return 1; // uppercase
    } else {
        return 0; // not uppercase
    }
}

int main() {
    char ch1 = 'A';
    char ch2 = 'a';
    char ch3 = '1';
    char ch4 = '!';

    printf("%d\n", is_uppercase(ch1)); // 1 (true)
    printf("%d\n", is_uppercase(ch2)); // 0 (false)
    printf("%d\n", is_uppercase(ch3)); // 0 (false)
    printf("%d\n", is_uppercase(ch4)); // 0 (false)

    return 0;
}
