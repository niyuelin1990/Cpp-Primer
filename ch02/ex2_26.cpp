#include <iostream>

int main()
{
    extern int bufSize;

    //不能变的指针
    int i2 = 2;
    int *const p2 = &i2;
    const int *const p3 = &i2;
    i2 = 11;

    std::cout << *p2 << " " << *p3 << std::endl;

    // const
    int i = 0;
    int *const p1 = &i;
     int ci = 43;
    const int *p4 = &ci;
    *p1 = 1;
    ci = 12;
    std::cout << *p4 << " " << *p1 << std::endl;

}