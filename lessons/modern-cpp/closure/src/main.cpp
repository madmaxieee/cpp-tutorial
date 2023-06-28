#include <iostream>

int main(int argc, char *argv[]) {
  // this is a closure
  auto add = [](int x, int y) { return x + y; };
  std::cout << "1 + 2 = " << add(1, 2) << std::endl;

  // capture by value and reference
  int x = 1;
  auto add_x = [x](int y) { return x + y; };
  auto add_x_ref = [&x](int y) { return x + y; };
  std::cout << "x = " << x << std::endl;
  std::cout << "by val: x + 2 = " << add_x(2) << std::endl;
  std::cout << "by ref: x + 2 = " << add_x_ref(2) << std::endl;
  x = 2;
  std::cout << "x = " << x << std::endl;
  std::cout << "by val: x + 2 = " << add_x(2) << std::endl;
  std::cout << "by ref: x + 2 = " << add_x_ref(2) << std::endl;

  return 0;
}
