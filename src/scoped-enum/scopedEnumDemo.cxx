namespace unscopedEnumDemo{
    enum Colors{
        Red,
        Yellow,
        Blue
    };
    enum otherColors{
        Violet,
        //Blue, <-- compile error due to collision with Colors::Blue
        Green
    };
}

namespace scopedEnumDemo{
    enum class Colors{
        Red,
        Blue
    };
    enum class otherColors{
        Red,
        Blue
    };
}

int main(int argc, char * argv[]){
    unscopedEnumDemo::Colors c1 = unscopedEnumDemo::Red;
    unscopedEnumDemo::otherColors c2 = unscopedEnumDemo::Green;
    scopedEnumDemo::Colors c3 = scopedEnumDemo::Colors::Red;
    scopedEnumDemo::otherColors c4 = scopedEnumDemo::otherColors::Red;

    return 0;
}
