#include <iostream>
#include <typeinfo>

using namespace std;

class Query_base
{
  public:
    Query_base() {}
    virtual ~Query_base() {}
};

class BinaryQuery : public Query_base
{
  public:
    BinaryQuery() {}
    virtual ~BinaryQuery() {}
};

class AndQuery : public BinaryQuery
{
  public:
    AndQuery() {}
    virtual ~AndQuery() {}
};

int main(int argc, char const *argv[])
{
    Query_base *qb = new AndQuery;
    if (dynamic_cast<AndQuery *>(qb) != NULL)
    {
        cout << "success." << endl;
    }
    else
    {
        cout << "failure." << endl;
    }
    Query_base *qb2 = new Query_base;
    try
    {
        dynamic_cast<AndQuery &>(*qb2);
        cout << "success." << endl;
    }
    catch (bad_cast &bc)
    {
        cout << "failure." << endl;
    }
    cout << (typeid(*qb) == typeid(*qb2)) << endl;
    cout << (typeid(*qb) == typeid(AndQuery)) << endl;

    cout << (typeid(&qb) == typeid(&qb2)) << endl;

    cout << typeid(*qb).name() << endl;
    cout << typeid(&qb).name() << endl;
    cout << typeid(qb).name() << endl;

    return 0;
}
