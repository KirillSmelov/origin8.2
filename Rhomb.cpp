#include "Rhomb.h"
Rhomb::Rhomb(int a, int A, int B) : Parallelogram(a, a, A, B)
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
std::string Rhomb::GetName()
{
    return name;
}