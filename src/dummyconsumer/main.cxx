#include <iostream>
#include <vector>
#include "Lazyguy.h"
// #include "Drawpool.h"

// template <class T>
// class myPair{
//     T values [2];
// public:
//     myPair(T first, T second)
//     {
//         values[0] = first;
//         values[1] = second;
//     }
// };

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


int main(int argc, char* argv[]){
    Dummylib::Lazyguy l;
    if(!l.doNothing(2u)){
        std::cout<<"Someone is busy"<<std::endl;
    }


//     myPair<int> a(2,3);

    std::vector<int> wMyVector{2, 3 , 1, 4};
   Drawpool<int> myDrawpool(wMyVector);
    int bla = myDrawpool.drawElement();
    std::cout<<"Drew "<<bla<<std::endl;
    return 0;
}
