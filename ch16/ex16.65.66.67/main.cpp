/***************************************************************************
 *  @file       main.cpp
 *  @author     Alan.W
 *  @date       3  Mar 2014
 *  @remark     This code is for the exercises from C++ Primer 5th Edition
 *  @note
 ***************************************************************************/
//
// Exercise 16.65:
// In § 16.3 (p. 698) we defined overloaded two versions of debug_rep one
// had a const char* and the other a char* parameter. Rewrite these functions
// as specializations.
//
// Exercise 16.66:
// What are the advantages and disadvantages of overloading
// these debug_rep functions as compared to defining specializations?
//
//  Overloading changes the function match.
//
// Exercise 16.67:
// Would defining these specializations affect function matching for debug_rep?
// If so, how? If not, why not?
//
//  Won't change.
//  Specializations instantiate a template; they do not overload it. As a result,
//  specializations do not affect function matching.
//

#include <iostream>
#include <vector>
#include <cstring>
#include <sstream>

// template
template <typename T>
std::string debug_rep(T* t);

// template specialization T=const char*  ,  char*  respectively.
template<>
std::string debug_rep(const char* str);
template<>
std::string debug_rep(      char *str);

template <typename T>
std::string debug_rep(T& t){
  std::cout <<  "T& t \n";
    std::ostringstream ret;
    ret << t;
    return ret.str();
}

template <typename T>
std::string debug_rep(const T& t){
  std::cout <<  "const T& t \n";
    std::ostringstream ret;
    ret << t;
    return ret.str();
}

// template <typename T>
// std::string debug_rep(T&& t){
//   std::cout <<  "T&& t \n";
//     std::ostringstream ret;
//     ret << t;
//     return ret.str();
// }

template<>
std::string debug_rep(      std::string *str){
      std::cout <<  "std::string *str \n";
    std::ostringstream ret;
    ret << *str;
    return ret.str();
}



int main()
{
    char p[] = "alan";
    std::cout << debug_rep(p) << "\n";

    const char *p2 = "alan2";
    std::cout << debug_rep(p2) << "\n";

    const char p3[] = "alan3";
    std::cout << debug_rep(p3) << "\n";

    std::string ss = "asd";
    std::cout << debug_rep(&ss) << "\n";
   
    std::string *s2 = &ss;
    std::cout << debug_rep(s2) << "\n";
    const std::string *s3 = &ss;
    std::cout << debug_rep(s3) << "\n";

    std::cout << debug_rep("as") << "\n";
    std::cout << debug_rep(111) << "\n";
    // std::cout << debug_rep(ss) << "\n";

    return 0;
}


template <typename T>
std::string debug_rep(T* t)
{
    std::cout <<  "T* t \n";
    std::ostringstream ret;
    ret << t;
    return ret.str();
}

// template specialization
// T = const char*
template<>
std::string debug_rep(const char* str)
{
    std::cout <<  "const char* str \n";
    std::string ret(str);
    return str;
}

// template specialization
// T =       char*
template<>
std::string debug_rep(      char *str)
{
    std::cout <<  "char *str \n";
    std::string ret(str);
    return ret;
}
