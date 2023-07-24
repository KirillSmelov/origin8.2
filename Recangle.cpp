#include"Recangle.h"
Recangle::Recangle(int a, int b) :Parallelogram(a, b, 90, 90)
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
std::string Recangle::GetName()
{
    return name;
}