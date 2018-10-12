#include "Triangle.h"

Triangle::Triangle(int base, int hauteur): _base(base), _hauteur(hauteur) {}

void Triangle::aireTriangle() {
 std::cout << "l'Aire du triangle est" << (_hauteur*_base) << std::endl;