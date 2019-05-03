#ifndef AGREGACION_Y_HERENCIA_JOSEPHPENAQUINO_LIBRARY_H
#define AGREGACION_Y_HERENCIA_JOSEPHPENAQUINO_LIBRARY_H

#include "Volume.h"

class Library
{
private:
    int max_books;
    int max_magazines;
public:
    void show_library();
    bool include(Volume * new_volume);
};


#endif //AGREGACION_Y_HERENCIA_JOSEPHPENAQUINO_LIBRARY_H
