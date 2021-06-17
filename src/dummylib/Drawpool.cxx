#include "Drawpool.h"

namespace Dummylib{

template<typename T>

Drawpool<T>::Drawpool(std::vector<T> iData){
    this->mPool = iData;
    srand (time(NULL));
}

template<typename T>
// inline
T Drawpool<T>::drawElement(){
    return mPool[0];
}

template class Drawpool<int>;

}//namespace Dummylib
