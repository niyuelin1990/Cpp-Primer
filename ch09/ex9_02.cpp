#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <deque>

using std::cout;
using std::deque;
using std::endl;
using std::list;
using std::vector;

int main()
{
    list<deque<int>> la;
    vector<int> ilist1;
    vector<int> ilist2(ilist1);
    vector<int> ilist2_1 = ilist1;
    vector<int> ilist = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> ilist_1{1, 2, 3};
    vector<int> ilist3(ilist.begin() + 1, ilist.end() - 1);
    vector<int> ilist4(7);
    vector<int> ilist5(7, 3);

    list<int> ilistx = {1,2 ,3, 4,5 ,6};
    vector<double> dvec1(ilist.begin(), ilist.end());
    // vector<double> dvec2(ilist);

    // ilist4.assign(ilist);


}