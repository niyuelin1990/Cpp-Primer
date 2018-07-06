//
//  ex9_27.cpp
//  Exercise 9.27
//
//  Created by pezy on 12/3/14.
//
//  @Brief  Write a program to find and remove the odd-valued
//          elements in a forward_list<int>.
//
//  @Refactored by @Yue Wang Jun 2015, Oct 2015
//

#include <iostream>
#include <forward_list>

using std::cout;
using std::forward_list;

auto remove_odds(forward_list<int> &flist)
{
    auto is_odd = [](int i) { return i & 0x1; };
    flist.remove_if(is_odd);
}

auto remove_odds2(forward_list<int> &flist)
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
    forward_list<int> data = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    remove_odds(data);
    for (auto i : data)
        cout << i << " ";

    forward_list<int> data2 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    remove_odds2(data2);
    for (auto i : data2)
        cout << i << " ";
    return 0;
}
