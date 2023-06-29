#include <_stdio.h>
#include <cstdio>
#include <fstream>
#include <iostream>
#include <sstream>

int main(int argc, char *argv[]) {
  // c way
  char buffer[100];
  snprintf(buffer, sizeof(buffer), "I am %d years old.\n", 20);
  printf("%s", buffer);
  // cpp way
  std::ostringstream stream;
  stream << "I am " << 20 << " years old.";
  std::cout << stream.str() << std::endl;

  std::istringstream stream2("I am 20 years old.");
  std::string _;
  stream2 >> _ >> _;
  int age;
  stream2 >> age;
  std::cout << "age: " << age << std::endl;

  int number;
  std::cout << "reading numbers.txt" << std::endl;
  std::ifstream file("./numbers.txt");
  while (file >> number) {
    std::cout << number << std::endl;
  }

  return 0;
}
