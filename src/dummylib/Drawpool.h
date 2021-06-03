#pragma once

#include <vector>

namespace Dummylib{
    template<class T>
    class Drawpool{
    public:
        Drawpool(std::vector<T>);
        T drawElement();
    private:
        std::vector<T> mPool;
    };
}
