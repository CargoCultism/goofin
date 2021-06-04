#pragma once
#include "IDummy.h"

namespace Dummylib {
class Lazyguy : private IDummy {
public:
  bool doNothing(int);
};
} // namespace Dummylib
