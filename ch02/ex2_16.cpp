
#include <iostream>

int main(int argc, char const *argv[])
{
    int i = 5, j = 10;
    int *p = &i;
    std::cout << p << " " << *p << " " << &p << std::endl;
    p = &j;
    std::cout << p << " " << *p << " " << &j << std::endl;
    *p = 20;
    std::cout << p << " " << *p << " " << j << std::endl;
    j = 30;
    std::cout << p << " " << *p << " " << &p << std::endl;

    int i0 = 0;
    int *pl = nullptr;
    int *p2 = &i0;
    if (pl)
        std::cout << "p1 pass" << std::endl;
    if (p2)
        std::cout << "p2 pass" << std::endl;
    if (*p2)
        std::cout << "i0 pass" << std::endl;

    //指针的引用
    int i2 = 42;
    int *pp;
    int *&rr = pp;

    rr = &i2;
    *rr = 0;
    std::cout << *pp << " " << *pp << " " << rr << std::endl;

    return 0;
}
