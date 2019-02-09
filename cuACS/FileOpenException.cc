#include <iostream>
#include <exception>

using std::string;

class FileOpenException: std::exception
{
        public:
                virtual const char* what() const throw()
                {
                        return "Could not open file";
                }
};
