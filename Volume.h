#ifndef AGREGACION_Y_HERENCIA_JOSEPHPENAQUINO_VOLUME_H
#define AGREGACION_Y_HERENCIA_JOSEPHPENAQUINO_VOLUME_H

#include <string>
#include <iostream>

class Volume
{
protected:
    std::string name;
    int vol;

public:
    Volume(std::string name, int vol);
    virtual void show() = 0;
};


#endif //AGREGACION_Y_HERENCIA_JOSEPHPENAQUINO_VOLUME_H
