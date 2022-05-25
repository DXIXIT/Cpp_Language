//This is a header file. This is where we put in all of the function prototypes and constant variables.

//We need a preprocessor directive first, however. We need a #define statement.

//I will quote my grader, Jason for why we need to do this:

/*
... if you have 2 files that include the same header file you'll get a definition duplication.
So, for example, if main.cpp includes h1.h and h2.h, and (if) h1.h and h2.h both include h3.h, you'd get h3.h loaded twice
which would cause a compilation error
*/

//We will add an extra step to this #define statment. This is the ifndef statment below.

#ifndef COOLFUNCTIONS_H //This is the preprocessor directive. This consists of the label "COOLFUNCTIONS_H"
#define COOLFUNCTIONS_H

//What the lines above are saying basically is that if "MYCOOLFUNCTIONS_H" is not defined, we will define the header file with the label above.

#include <iostream>
#include <string> //This statment is completely valid, and even important to put in this #include statement. (I think that this should be put in after the ifndef statement, however, if it is needed.)


using std::string; //Interesting how both <iostream> and <string> have the same namespace...

using namespace std;


void welcome(const string &message = "Hello!\n");
//Btw, in this case we are allowed to use default arguments with pass by reference because the value of the default string variable is not going to be modified.



#endif //This ends the "ifndef" preprocessor directive. Indicates the end of header file has been reached.

/* Essentially, if you are going to have multiple C++ files with this header file, they will need an #ifndef directive so that the compiler need not to repeatedly check if a the current header file is defined. The compiler can just skip down to the #endif statement and go its merry way. */