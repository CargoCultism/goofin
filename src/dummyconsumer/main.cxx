#include <iostream>
#include <vector>
#include "../dummylib/Lazyguy.h"
#include "Drawpool.h"

int main(int argc, char* argv[]){
    Dummylib::Lazyguy l;
    if(!l.doNothing(2u)){
        std::cout<<"Someone is busy"<<std::endl;
    }

    std::vector<int> wMyVector{2, 3 , 1, 4};
   Dummylib::Drawpool<int> myDrawpool(wMyVector);
    int bla = myDrawpool.drawElement();
    std::cout<<"Drew "<<bla<<std::endl;
    return 0;
}
