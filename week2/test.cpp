#include <iostream>

int main() {
  int p = 44;
  int *i;
  i = &p;
  char *c;
  c = static_cast<char *>(static_cast<void *>(i));

  std::cout << *c;

  return 0;
}
