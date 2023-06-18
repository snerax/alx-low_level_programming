#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
  srand(time(0));
  int n = rand() - RAND_MAX / 2;
  std::cout << n << " is ";
  if (n > 0) {
    std::cout << "positive";
  } else if (n == 0) {
    std::cout << "zero";
  } else {
    std::cout << "negative";
  }
  std::cout << std::endl;
}
