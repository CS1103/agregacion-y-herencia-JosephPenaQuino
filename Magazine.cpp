//
// Created by joseph on 5/3/19.
//

#include "Magazine.h"

Magazine::Magazine(int num_magazines, std::string name, int vol) : num_magazines{num_magazines}, Volume(name, vol){}

void Magazine::show()
{
    std::cout <<  "Volume #" << vol <<  ": " << "Magazine #" << num_magazines << ": Title: \"" << name << "\"" << std::endl;
}
