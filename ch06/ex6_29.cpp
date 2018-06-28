#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

char &get_val(std::string &str, size_t ix)
{
    return str[ix];
}

int *ff(int *a)
{
    *a = 11;
}

int main()
{
    string s("a value");
    cout << s << endl;
    get_val(s, 0) = 'A';
    cout << s << endl;

    int a = 1;
    int *xx = ff(&a);
    cout << *xx << endl;
    return 0;
}
