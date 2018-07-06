#include <iostream>
#include <vector>

void double_and_insert(std::vector<int> &v, int some_val)
{
    auto mid = [&] { return v.begin() + v.size() / 2; };
    for (auto curr = v.begin(); curr != mid(); ++curr)
        if (*curr == some_val)
            ++(curr = v.insert(curr, 2 * some_val));
}

void double_and_insert2(std::vector<int> &v, int some_val)
{
    auto beg = v.begin();
    int org_size = v.size(), i = 0;
    while (i <= org_size / 2)
    {
        if (*beg == some_val)
        {
            beg = v.insert(beg, 2 * some_val);
            beg++;
            beg++;
        }
        else
            beg++;
        i++;
    }
}

int main()
{
    std::vector<int> v{1, 9, 1, 9, 9, 9, 1, 1};
    double_and_insert2(v, 1);

    for (auto i : v)
        std::cout << i << " ";
    std::cout << std::endl;
}
