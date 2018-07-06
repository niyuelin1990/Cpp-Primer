#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using std::endl;
using std::cout;

void add(int a)
{
    auto sum = [a](int b) { return a + b; };
    cout << sum(1) << endl;
}

int main()
{
    auto sum = [](int a, int b) { return a + b; };
    std::cout << sum(1, 1) << std::endl;

    add(1);
    add(2);
    return 0;
}
