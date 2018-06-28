#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    unsigned long u11 = 3, u12 = 7;
    cout << (u11 & u12) << " " << (u11 | u12) << endl;
    cout << sizeof u11 << endl;

    int x[10];
    int *p = x;
    cout << sizeof(x) << " " << sizeof(*x) << endl;
    cout << sizeof(p) << " " << sizeof(*p) << " " << p << endl;

    int xx = 1, yy = 2;
    cout << sizeof xx + yy << endl;
    return 0;
}
