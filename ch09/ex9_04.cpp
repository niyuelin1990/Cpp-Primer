#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

bool search_val(vector<int>::iterator beg, const vector<int>::iterator end, const int val)
{
    cout << "val: " << val << endl;
    while (beg != end)
    {
        if (*beg == val)
        {
            return true;
        }
        beg++;
    }
    return false;
}

bool search_val2(vector<int> vl, const int &val)
{
    vector<int>::iterator vbeagin = vl.begin();
    while (vbeagin != vl.cend())
    {
        if (*vbeagin == val)
        {
            return true;
        }
        vbeagin++;
    }

    return false;
}

vector<int>::iterator search_iter(vector<int>::iterator beg, const vector<int>::iterator end, const int val)
{
    cout << "val: " << val << endl;
    while (beg != end)
    {
        if (*beg == val)
        {
            return beg;
        }
        beg++;
    }
    return beg;
}

int main()
{
    vector<int> v0 = {1, 2, 3, 4, 5, 6, 7, 8};
    std::vector<int> vec{1, 2, 3, 4, 5};

    cout << vec.empty() << endl;

    cout << search_val(v0.begin(), v0.end(), 3) << endl;
    cout << search_val2(v0, 3) << endl;

    // cout << (search_iter(v0.begin(), v0.end(), 3) - v0.end()) << endl;
    // cout << (search_iter(v0.begin(), v0.end(), 9) - v0.end()) << endl;
    return 0;
}
