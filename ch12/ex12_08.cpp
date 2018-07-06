#include <iostream>
#include <vector>
#include <memory>

bool b(){
    int *p = new int;
    //  int *p = new (std::nothrow)int;
     std::cout<< *p<< std::endl;
    return p;
}

int main(){
    std::cout<< b()<< std::endl;
}