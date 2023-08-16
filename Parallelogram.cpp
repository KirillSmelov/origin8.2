#include "Parallelogram.h" 
Parallelogram::Parallelogram(int a, int b, int A, int B) :Quadrangle(a, b, a, b, A, B, A, B)
{
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
    if (a != c || b != d || A != C || B != D)
    {
        throw std::runtime_error("стороны попарно не равны или углы попарно не равны");

    }
}
std::string Parallelogram::GetName()
{
    return name;
}
