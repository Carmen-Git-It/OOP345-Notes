#include <iostream>

void cpy(char *dest, const char *src) {
  while ((*dest++ = *src++))
    ;
}

int main(int argc, char *argv[]) {
  int a[5]{10, 20, 30, 40, 50}; // Aggregate initialization
  for (auto &element : a) {     // Range based for loop
    std::cout << element << std::endl;
  }
  std::cout << "\n\n==Unions==\n";

  // Union is good for memory efficiency on a small computer
  union cid {
    char c[8];
    double d;
    int i;
  };

  cid i;
  i.d = 1234.567;
  std::cout << "Double: " << i.d << std::endl;
  i.i = 10;
  std::cout << "Integer: " << i.i << std::endl;
  i.c[0] = 'x';
  i.c[1] = '\0';
  std::cout << "char: " << i.c << std::endl;

  std::cout << "\nSize of cid: " << sizeof(cid) << std::endl;

  // Weird bs
  char hello[] = "hello";
  char hi[6];
  cpy(hi, "hi");
  std::cout << hi << std::endl;

  // Can use auto to get an anonymous class's name.

  // Forward declaration

  // Move assignment/contructor
  return 0;
}
