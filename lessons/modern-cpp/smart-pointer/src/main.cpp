#include <iostream>
#include <memory>

int main(int argc, char *argv[]) {
  std::unique_ptr<int> p1(new int(42));
  // transfer ownership, p1 is now invalid
  std::unique_ptr<int> p2 = std::move(p1);
  std::cout << *p2 << std::endl;
  // would cause a runtime error
  std::cout << *p1 << std::endl;
  return 0;
}
