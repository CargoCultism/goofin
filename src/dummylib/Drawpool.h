#pragma once

#include <vector>
#include <stdlib.h>
#include <time.h>

namespace Dummylib{
template<class T>
class Drawpool{
private:
    std::vector<T> mPool;
public:
    Drawpool(std::vector<T> iData){
        this->mPool = iData;
        srand (time(NULL));
    }
    T drawElement(){
        return mPool[0];
    }
};
}
