#include <string>

namespace inheritance
{
  class Animal {
  protected:
    std::string name;
  public:
    Animal (std::string name) {
      this->name = name;
    }

    std::string getName () {
      return this->name;
    }
  };
}
