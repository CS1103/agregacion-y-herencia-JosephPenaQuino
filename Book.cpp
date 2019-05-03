#include "Book.h"

Book::Book(int num_books, std::string name, int vol) : num_books{num_books}, Volume(name, vol) {}

void Book::show()
{
     std::cout <<  "Volume #" << vol <<  ": " << "Book #" << num_books << ": Title: \"" << name << "\"" << std::endl;
}
