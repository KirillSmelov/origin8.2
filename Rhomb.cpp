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
/*void Rhomb::method()
{
    std::string error = "все стороны не равны или углы попарно не равны ";
    if (a != c || a != b || a != d || b != c || b != d || c != d || A != C || B != D)
    {
        throw error;
    }
    else {}
}*/