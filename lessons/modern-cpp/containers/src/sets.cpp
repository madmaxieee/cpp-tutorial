#include <iostream>
#include <unordered_set>

int main(int argc, char *argv[]) {
  std::unordered_set<std::string> set;
  set.insert("one");
  set.insert("two");
  set.insert("three");

  // classic, idomatic way
  std::cout << "\"one\" is in the set: " << (set.find("one") != set.end())
            << std::endl;
  // more modern way (c++20)
  std::cout << "\"two\" is in the set: " << (set.contains("two")) << std::endl;

  // custom hash function
  typedef struct complex_number {
    int real;
    int imag;
    bool operator==(const complex_number &other) const {
      return real == other.real && imag == other.imag;
    }
  } complex_number;
  typedef struct complex_number_hash {
    std::size_t operator()(const complex_number &c) const {
      return std::hash<int>()(c.real) ^ std::hash<int>()(c.imag);
    }
  } complex_number_hash;
  std::unordered_set<complex_number, complex_number_hash> complex_set;
  complex_set.insert({1, 2});
  complex_set.insert({3, 4});
  complex_set.insert({5, 6});

  std::cout << "{1, 2} is in the set: " << (complex_set.contains({1, 2}))
            << std::endl;
  return 0;
}
