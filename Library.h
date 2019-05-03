#ifndef AGREGACION_Y_HERENCIA_JOSEPHPENAQUINO_LIBRARY_H
#define AGREGACION_Y_HERENCIA_JOSEPHPENAQUINO_LIBRARY_H

#include "Volume.h"
#include <vector>

class Library
{
private:
    int max_books;
    int max_magazines;
    std::vector<Volume> volumes;
public:
    Library(int max_books, int max_magazines);
    void show_library();
    bool include(Volume * new_volume);
};


#endif //AGREGACION_Y_HERENCIA_JOSEPHPENAQUINO_LIBRARY_H
