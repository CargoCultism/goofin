#include "Lazyguy.h"
#include <iostream>
int main(int argc, char *argv[]) {
  Dummylib::Lazyguy l;
  if (!l.doNothing(2u)) {
    std::cout << "Someone is busy" << std::endl;
  }
  return 0;
}
