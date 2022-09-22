#include <boost/core/scoped_enum.hpp>

namespace bse{
    BOOST_SCOPED_ENUM_DECLARE_BEGIN(Colors){
        Red,
        Blue
    }
BOOST_SCOPED_ENUM_DECLARE_END(Colors)
}

int main(int argc, char * argv[]){
    bse::Colors wC = bse::Colors::Red;
}
