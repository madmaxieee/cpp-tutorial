#include "Math.h"
#include <iostream>

int main(int argc, char *argv[]) {
  MyMath my_math = MyMath();
  int a = 3;
  int b = 4;
  std::cout << "a + b = " << my_math.add(a, b) << std::endl;
  return 0;
}
