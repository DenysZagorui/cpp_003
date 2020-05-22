#include <iostream>
#include <string>
#include "make_double.h"
#include "print_string.h"


int main()
{

#ifdef USE_STRING_FUNC
    printString("invoke printString\n");
#else
    std::cout << makeDouble(10) << "\n";
#endif

	return 0;
}
