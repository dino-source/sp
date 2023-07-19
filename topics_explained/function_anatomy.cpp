#include <iostream>
#include <string>

using Message = std::string const &;

/* Declaration of function print */
void                // return type
    print           // function name
(                   // parameter list starts here
    Message msg,    // 1st parameter of function print
    char delim      // 2nd parameter of function print
);                  // parameter list ends here


int main()
{
    print("Hello friends!", '\n');  // function call
}


/* Definition of function print */
void print(Message msg, char delim) // function header
{                                   // function body starts here
    std::cout << msg << delim;      // statement
}                                   // function body ends here

