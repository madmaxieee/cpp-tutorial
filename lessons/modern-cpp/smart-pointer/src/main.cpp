#include <iostream>
#include <memory>

int main(int argc, char *argv[]) {
  std::unique_ptr<int> p1(new int(42));
  // transfer ownership, p1 is now invalid
  std::unique_ptr<int> p2 = std::move(p1);
  std::cout << *p2 << std::endl;
  // would cause a runtime error
  // std::cout << *p1 << std::endl;

  int *p = new int(42);
  std::shared_ptr<int> p3(p);
  // p4 shares ownership with p3
  std::shared_ptr<int> p4 = p3;
  std::cout << *p3 << std::endl;
  std::cout << *p4 << std::endl;
  // when the last shared_ptr is destroyed, the object is deleted
  p3.reset();
  p4.reset();
  // p is now invalid
  // would cause undefined behavior
  std::cout << *p << std::endl;
  return 0;
}
