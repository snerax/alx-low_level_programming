#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0)); // Seed the random number generator

    int n = rand() % RAND_MAX; // Generate a random number

    std::cout << "The number " << n << " is ";

    if (n > 0) {
        std::cout << "positive";
    } else if (n == 0) {
        std::cout << "zero";
    } else {
        std::cout << "negative";
    }

    std::cout << std::endl;

    return 0;
}
}
