#include <iostream>
#include <unordered_map>

int main(int argc, char *argv[]) {
  // - hashable
  // - keys are unique
  // - keys can be of any hashable type1
  // - O(1) lookup, but the constant is large
  std::unordered_map<std::string, int> map;
  map["one"] = 1;
  map["two"] = 2;
  map["three"] = 3;

  std::cout << "map[\"one\"] = " << map["one"] << std::endl;
  std::cout << "map[\"two\"] = " << map["two"] << std::endl;
  std::cout << "map[\"three\"] = " << map["three"] << std::endl;
  return 0;
}
