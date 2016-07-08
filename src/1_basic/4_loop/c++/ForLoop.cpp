#include <iostream>
#include <list>

int main() {
  // g++ ForLoop.cpp -std=c++11
  //std::list<int> l = {0, 1, 2, 3, 4, 5};
  int l[] = {0, 1, 2, 3, 4, 5};
  
  // C++ 11
  for(int i : l )
    std::cout << i << ' ';
  std::cout << std::endl;

  return 0;
}
