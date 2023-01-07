#include <iostream>
#include "./cat.cpp"

using namespace inheritance;
using namespace std;

int main () {
  string name = "mark";
  Cat mark(name);
  cout << mark.getName() << '\n';
  cout << mark.meow() << '\n';
  return 0;
}
