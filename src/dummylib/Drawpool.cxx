#include "Drawpool.h"

namespace Dummylib{

template<typename T>
inline
Drawpool<T>::Drawpool(std::vector<T> iData){
    this->mPool = iData;
    srand (time(NULL));
}

T Drawpool::drawElement(){
    return mPool.first();
}

}//namespace Dummylib
