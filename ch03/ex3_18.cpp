#include <vector>
#include <iostream>

int main()
{
    std::vector<int> ivec{42};
    ivec.push_back(12);
    for (int mem : ivec)
    {
        std::cout << mem << std::endl;
    }

    return 0;
}
