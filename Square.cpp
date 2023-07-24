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
}
std::string Square::GetName()
{
    return name;
}