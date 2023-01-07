#include <iostream>
#include <string>

using namespace std;

template<typename T> 
void swap (T* i, T* j) {
  T k = *i;
  *i = *j;
  *j = k;
}

int main () {
  int i = 1, j = 2;
  string a = "hello", b = "world";

  cout << "Before swap: " << "i = " << i << ", j = " << j << "\n";
  swap(&i, &j);
  cout << "After swap: " << "i = " << i << ", j = " << j << "\n";

  cout << '\n';

  cout << "Before swap: " << "a = " << a << ", b = " << b << "\n";
  swap(a, b);
  cout << "Before swap: " << "a = " << a << ", b = " << b << "\n";
  return 0;
}
