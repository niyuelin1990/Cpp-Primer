// read the standard input a line at a time.
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

int main()
{
    string str;
    while (getline(cin, str)){
        cout << str << endl;
        if(str.empty()){
            break;
        };
    };
    return 0;
}
