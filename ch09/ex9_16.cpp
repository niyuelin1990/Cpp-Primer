//
//  ex9_16.cpp
//  Exercise 9.16
//
//  Created by pezy on 12/2/14.
//
//  @Brief  Repeat the previous program, but compare elements in a
//          list<int> to a vector<int>.
//
//  @Refactor Yue Wang Jun 2015
//

#include <iostream>
#include <vector>
#include <list>
using std::list;
using std::vector;

bool l_v_equel(vector<int> &ivec, list<int> &ilist)
{
    if (ilist.size() != ivec.size())
    {
        return false;
    }
    auto lb = ilist.cbegin();
    auto le = ilist.cend();
    auto vb = ivec.cbegin();
    for (; lb != le; lb++, vb++)
        if (*lb != *vb)
        {
            return false;
        }
    return true;
}

int main()
{
    std::list<int> li{1, 2, 3, 4, 5};
    std::vector<int> vec2{1, 2, 3, 4, 5};
    std::vector<int> vec3{1, 2, 3, 4};

    std::cout << (std::vector<int>(li.begin(), li.end()) == vec2 ? "true" : "false") << std::endl;
    std::cout << (std::vector<int>(li.begin(), li.end()) == vec3 ? "true" : "false") << std::endl;

    std::cout << l_v_equel(vec2, li) << std::endl;

    return 0;
}
