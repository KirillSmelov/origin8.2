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
/*void Recangle::method()
{
    std::string error = "стороны a,c и b,d попарно не равны или все углы не равны 90";
    if (a != c || b != d || A != 90 || B != 90 || C != 90 || D != 90)
    {
        throw error;
    }
    else {}
}*/