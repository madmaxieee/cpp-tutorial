#include <iostream>
#include <sstream>

int main(int argc, char *argv[]) {
  std::ostringstream stream;
  stream << "I am " << 20 << " years old.";
  std::cout << stream.str() << std::endl;

  std::istringstream stream2("I am 20 years old.");
  std::string _;
  stream2 >> _ >> _;
  int age;
  stream2 >> age;
  std::cout << "age: " << age << std::endl;

  return 0;
}
