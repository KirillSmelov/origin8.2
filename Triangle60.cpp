#include "Triangle60.h"
Triangle60::Triangle60(int a) :Triangle(a, a, a, 60, 60, 60)
{
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;
    if (a != c || a != b || b != c || A != 60 || B != 60 || C != 60)
    {
        throw std::runtime_error("¬се стороны неравны или все углы не равны");
    }
}
std::string Triangle60::GetName()
{
    return name;
}
