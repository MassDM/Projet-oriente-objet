#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>

class Rectangle{

public:
    Rectangle(int hauteur, int base);
    void _aireRectangle();
    void _perimetreRectangle();

private: 
     int _hauteur;
     int _base;
};

#endif 