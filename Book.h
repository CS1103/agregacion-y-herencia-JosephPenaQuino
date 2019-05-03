#ifndef AGREGACION_Y_HERENCIA_JOSEPHPENAQUINO_BOOK_H
#define AGREGACION_Y_HERENCIA_JOSEPHPENAQUINO_BOOK_H


#include "Volume.h"

class Book : public Volume
{
private:
    int num_books;
public:
    Book(int num_books, std::string name, int vol);
    void show();
};

#endif //AGREGACION_Y_HERENCIA_JOSEPHPENAQUINO_BOOK_H
