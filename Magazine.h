#ifndef AGREGACION_Y_HERENCIA_JOSEPHPENAQUINO_MAGAZINE_H
#define AGREGACION_Y_HERENCIA_JOSEPHPENAQUINO_MAGAZINE_H


#include "Volume.h"

class Magazine : Volume
{
private:
    int num_magazines;
public:
    Magazine(int num_magazines, std::string name, int vol);
    void show();
};


#endif //AGREGACION_Y_HERENCIA_JOSEPHPENAQUINO_MAGAZINE_H
