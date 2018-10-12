#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <iostream>


class Triangle{
public:
    Triangle(int hauteur, int base);
    void _aireTriangle();
    void _perimetreTriangle();

private: 
     int _hauteur;
     int _base;

};

#endif 