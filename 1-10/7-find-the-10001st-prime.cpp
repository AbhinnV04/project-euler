//  This is the suggested optimized version to solve this problem. 
//  It uses 6k +/- 1 optimization which is faster than checking upto the sqrt of i.
#include <cmath>
#include <iostream>

// Returns true if n is a prime number.
bool IsPrime(int n) {
  if (n == 1) return false;
  if (n < 4) return true;  // 2 and 3 are prime
  if (n % 2 == 0) return false;
  if (n < 9) return true;  // 4, 6, 8 already excluded
  if (n % 3 == 0) return false;

  long max_check_value = floor(sqrt(n));
  long f = 5;
  while (f <= max_check_value) {
    if (n % f == 0) return false;
    if (n % (f + 2) == 0) return false;
    f += 6;
  }

  return true;
}

// Returns the nth prime number.
long NthPrime(int limit) {
  if (limit < 1) return -1;

  int count = 0;
  long candidate = 1;

  while (count < limit) {
    ++candidate;
    if (IsPrime(candidate)) {
      ++count;
    }
  }

  return candidate;
}

int main() {
  int limit;
  std::cout << "Enter the required prime position: ";
  std::cin >> limit;
  std::cout << limit << "th prime: " << NthPrime(limit) << std::endl;
  return 0;
}