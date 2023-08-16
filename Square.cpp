#include "Square.h"
Square::Square(int a) :Rhomb(a, 90, 90)
{
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
    if (a != c || a != b || a != d || b != c || b != d || c != d || A != 90 || B != 90 || C != 90 || D != 90)
    {
        throw std::runtime_error("все стороны не равны или все углы не равны 90");
    }
}
std::string Square::GetName()
{
    return name;
}
