#include "FeetInches.h"
#ifndef LANDTRACT_H
#define LANDTRACT_H
class LandTract{
    int length;
    int width;
    public:
        LandTract(FeetInches len, FeetInches wid){
            length = len.getInches();
            width = wid.getInches();
        }
        int getArea(){
            return length*width;
        }
};


#endif LANDTRACT_H

