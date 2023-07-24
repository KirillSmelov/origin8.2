#include "Triangle90.h"
Triangle90::Triangle90(int a, int b, int c, int A, int B) :Triangle(a, b, c, A, B, 90)
{
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;
}
std::string Triangle90::GetName()
{
    return name;
}