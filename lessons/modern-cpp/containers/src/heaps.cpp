#include <iostream>
#include <queue>

int main(int argc, char *argv[]) {
  std::priority_queue<int> heap;

  heap.push(5);
  heap.push(2);
  heap.push(7);
  heap.push(1);
  heap.push(9);

  while (!heap.empty()) {
    std::cout << heap.top() << std::endl;
    heap.pop();
  }

  return 0;
}
