#include <iostream>
#include <typeinfo>

int main()
{
    int a = 3, b = 4;
    decltype(a) c = a;
    decltype((b)) d = a;
    decltype(a = b) e = a;
    ++c;
    ++d;
    std::cout << a << " " << b << " " << c << " " << d << " " << e << std::endl;

    // Foo f;

    // f.bookNo = 1;

    // std::cout << f.bookNo << std::endl;
}

struct Foo
{
    std::string bookNo;
    unsigned units_sold = 0;
};