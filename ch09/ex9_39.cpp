
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    std::vector<std::string> v;
    v.reserve(2);
    string word;
    while (cin >> word)
    {
        v.push_back(word);
    }
    cout << v.size() << "  " << v.capacity() << endl;

    return 0;
}
