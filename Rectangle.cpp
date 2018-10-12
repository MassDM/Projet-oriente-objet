#include "Rectangle.h"

Rectangle::Rectangle(int base, int hauteur): _base(base), _hauteur(hauteur) {}

void Rectangle::aireRectangle() {
 std::cout << "l'Aire du rectangle est" << (_hauteur*_base) << std::endl;
}