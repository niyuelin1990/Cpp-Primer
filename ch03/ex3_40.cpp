// more discuss: https://github.com/Mooophy/Cpp-Primer/pull/241
// @frank67

#include <iostream>
#include <cstring>

// const char cstr1[]="Hello";
// const char cstr2[]="world!";

int main()
{
     static const char cstr1[] = "Hi";
    static const char cstr2[] = "frank67";
    // constexpr size_t new_size = strlen(cstr1) + strlen(" ") + strlen(cstr2) +1;
    // char cstr3[new_size];
      char cstr3[strlen(cstr1) + strlen(" ") + strlen(cstr2) + 1];
    
    strcpy(cstr3, cstr1);
    strcat(cstr3, " ");
    strcat(cstr3, cstr2);
    
    std::cout << cstr3 << std::endl;
}
