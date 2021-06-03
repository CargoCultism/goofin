#include <iostream>
#include "Lazyguy.h"
#include "Drawpool.h"

using Dummylib::Drawpool;
template class Dummylib::Drawpool<int>;
int main(int argc, char* argv[]){
    Dummylib::Lazyguy l;
    if(!l.doNothing(2u)){
        std::cout<<"Someone is busy"<<std::endl;
    }


    std::vector<int> wMyVector{2, 3 , 1, 4};
    Drawpool<int> myDrawpool(wMyVector);
    int bla = myDrawpool.drawElement();
    return 0;
}
