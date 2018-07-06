
#include "ex13_30.h"

#include <iostream>

int main()
{
    HasPtr h("asda");
    HasPtr h2(h);
    h = "hi world";
    h2 = "aaa";
    swap(h, h2);
    h.show();
    h2.show();
    // std::cout << h.show()<<std::endl;
    // std::cout << h2.show()<<std::endl;
    
    return 0;
}