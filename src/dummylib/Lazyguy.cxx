#include <iostream>
#include "Lazyguy.h"


bool Dummylib::Lazyguy::doNothing(int value){
    std::cout<<"Not doing anything with "<<value<<std::endl;
    return false;
}
