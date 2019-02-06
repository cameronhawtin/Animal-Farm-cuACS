#include <iostream>
#include <exception>
using namespace std::string;

class FileOpenException: std::exception
{
  public:

    FileOpenException(string attemptedPath)
    {
      filePath = attemptedPath;
    }

    virtual const char* what() const throw()
    {
      return "Could not open file at: " + filePath
    }

  private:
    string filePath;
}
