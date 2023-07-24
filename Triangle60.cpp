#include "Triangle60.h"
Triangle60::Triangle60(int a) :Triangle(a, a, a, 60, 60, 60)
{
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;
}
std::string Triangle60::GetName()
{
    return name;
}