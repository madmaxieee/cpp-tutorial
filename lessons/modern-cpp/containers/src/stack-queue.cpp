#include <iostream>
#include <queue>
#include <stack>

int main(int argc, char *argv[]) {
  std::stack<int> s;
  s.push(1);
  s.push(2);
  s.push(3);
  std::cout << s.top() << ' ';
  s.pop();
  std::cout << s.top() << ' ';
  s.pop();
  s.push(4);
  std::cout << s.top() << ' ';
  s.pop();
  std::cout << std::endl;

  std::queue<int> q;
  q.push(1);
  q.push(2);
  std::cout << q.front() << ' ';
  q.pop();
  q.push(3);
  std::cout << q.front() << ' ';
  q.pop();
  std::cout << std::endl;

  return 0;
}
