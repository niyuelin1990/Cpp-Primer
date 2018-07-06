#include <iostream>
#include <forward_list>

using std::cout;
using std::forward_list;


void remove_odds2(forward_list<int> &flist)
{
    auto prev = flist.before_begin();
    auto cuur = flist.begin();
    while (cuur != flist.end())
    {
        if (*cuur & 1)
            cuur = flist.emplace_after(prev);
        else
        {
            prev = cuur;
            cuur++;
        }
    }
}

int main()
{

    forward_list<int> data2 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    remove_odds2(data2);
    for (auto i : data2)
        cout << i << " ";
    return 0;
}
