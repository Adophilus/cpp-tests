#include <string>
#include "./animal.cpp"

namespace inheritance {
  class Cat : public Animal {
  public:
    Cat (std::string name) : Animal(name) {}

    std::string meow () {
      return "Meow! My name is " + this->name;
    }
  };
}
