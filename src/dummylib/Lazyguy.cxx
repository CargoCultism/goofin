#include "Lazyguy.h"
#include <iostream>

bool Dummylib::Lazyguy::doNothing(int value) {
  std::cout << "Not doing anything with " << value << std::endl;
  return false;
}
