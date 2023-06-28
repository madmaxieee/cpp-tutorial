#include <array>
#include <deque>
#include <iostream>
#include <list>
#include <vector>

int main(int argc, char *argv[]) {
  // array example
  // - fixed size
  // - lightweight wrapper around C-style array
  std::array<int, 3> arr = {1, 2, 3};
  std::cout << "array: ";
  for (auto i : arr) {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  // vector example
  // - dynamic size
  // - similar to array, but with dynamic size
  // - not as lightweight as array
  // - O(n) insertion at front
  // - can be used as a stack
  std::vector<int> vec = {1, 2, 3};
  std::cout << "vector: ";
  for (auto i : vec) {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  // deque example
  // - dynamic size
  // - almost identical api to vector
  // - O(1) insertion at front
  std::deque<int> deq = {1, 2, 3};
  std::cout << "deque: ";
  for (auto i : deq) {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  // list example
  // - doubly linked list
  // - O(1) insertion everywhere
  // - no direct random access
  std::list<int> lst = {1, 2, 3};
  std::cout << "list: ";
  for (auto i : lst) {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  return 0;
}
