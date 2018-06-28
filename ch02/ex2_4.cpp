#include <iostream>

int main()
{
    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << std::endl; // 32
    std::cout << u - u2 << std::endl; // 4294967264
    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl; // 32
    std::cout << i - i2 << std::endl; // -32
    std::cout << i - u << std::endl;  // 0
    std::cout << u - i << std::endl;  // 0

    extern int nn;
    // nn = 1;
    // std::cout << "nn:" << nn << std::endl;
    // extern int nn;
    // nn = 3;
    // std::cout << "nn2:" << nn << std::endl;
    int i3 = 100, sum = 0;
    for (int i3 = 0; i3 != 10; ++i3)
    {
        sum += i3;
    }
    std::cout << i3 << " " << sum << std::endl;

    //引用
    int rval = 1;
    int &rval2 = rval;
    rval = 2;
    std::cout << rval2 << std::endl;

    //引用2
    int c = 1, &r1 = c;
    double d = 2, &r2 = d;

    // r2 = r1;   // 1 1 1 1
    // std::cout << c << " " << r1 << " " << d << " " << r2 << std::endl;
    // r2 = 3.14; //1 1  3.14 3.14
    // std::cout << c << " " << r1 << " " << d << " " << r2 << std::endl;

    // c = r2; // 2 2 2 2
    // std::cout << c << " " << r1 << " " << d << " " << r2 << std::endl;
    r1 = d; // 2 2 2 2
    std::cout << c << " " << r1 << " " << d << " " << r2 << std::endl;

    //引用3
    int ix, &ri = ix;
    ix = 5;
    ri = 10;
    std::cout << ri << std::endl;

    

    return 0;
}
