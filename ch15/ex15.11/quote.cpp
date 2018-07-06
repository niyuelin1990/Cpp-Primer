#include "quote.h"

void Quote::debug() const
{
    std::cout << "data1 members of this class:\n"
              << "bookNo= " <<this->bookNo << " "
              << "price= " <<this->price<< " ";
}
