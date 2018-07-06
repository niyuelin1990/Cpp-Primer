//
//  ex12_23.cpp
//  Exercise 12.23 
//
//  Created by pezy on 12/30/14.
//
//  Write a program to concatenate two string literals, putting the result in a dynamically allocated array of char. 
//  Write a program to concatenate two library strings that have the same value as the literals used in the first program. 

#include <iostream>
#include <string>
// #include <string.h>

int main()
{

    const char *c1 = "hello ";
    const char *c2 = "world";

    // dynamically allocated array of char
    char *concatenate_string = new char[strlen("hello " "world") + 1]();
    // strcat(concatenate_string, "hello ");
    // strcat(concatenate_string, "world");
    strcpy(concatenate_string, c1);
    strcat(concatenate_string, c2);

    std::cout << concatenate_string << std::endl;
    delete [] concatenate_string;
    
    // std::string
    std::string str1{ "hello " }, str2{ "world" };
    std::cout << str1 + str2 << std::endl;
}
