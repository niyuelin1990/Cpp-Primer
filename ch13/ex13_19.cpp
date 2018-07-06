
#include "ex13_19.h"

#include <iostream>


int Employee::s_increment = 0;

void f1(Employee x){

}
void f3(const Employee x){

}

void f2(Employee &x){
    
}

void f4(const Employee &x){
    
}

int main()
{
	Employee *px = new Employee;
    // f1(*px);
    // f2(*px);
    // f3(*px);
    // f4(*px);
    delete px;


	return 0;
}
