#include <stdio.h>
#include <limits.h>

int main() {
  long long x = 10;
  long long *ptr = &x;
  long long newValue = 20;

  // Check for potential overflow before assignment
  if (newValue > LLONG_MAX - x) {
    fprintf(stderr, "Integer overflow detected!\n");
    return 1; // Indicate an error
  }
  *ptr = newValue;
  printf("%lld", x); 
  return 0;
}
