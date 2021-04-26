#pragma once
#include "IDummy.h"

namespace Dummylib{
    class Lazyguy : public IDummy{
    public:
        bool doNothing(int);
    };
}
