//
//Write a program to create a vector with ten int elements.
//Using an iterator, assign each element a value that is twice its current value.
// Test your program by printing the vector.
//

#include <vector>
#include <iostream>
#include <iterator>
#include <string>
#include <cstring>

using std::cout;
using std::iterator;
using std::string;
using std::vector;
using namespace std;

int main()
{
    vector<int> v{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (auto it = v.begin(); it != v.end(); ++it)
        *it = *it * 2;
    for (auto i : v)
        cout << i << " " << std::endl;
    ;

    string ss = "asdasd我是王挺sdf";
    char ssTest[100] = "asdasd我是王挺sdf";

    cout << "length:" << ss.length() << " " << ss.size() << " " << strlen(ssTest) << std::endl;

    return 0;
}
