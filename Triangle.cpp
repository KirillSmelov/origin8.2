#include "Triangle.h"
#include "Figure.h"
#include <iostream>
std::string error = "сумма углов не равна 180";
Triangle::Triangle(int a, int b, int c, int A, int B, int C) :Figure()
{
    std::exception runtime_error ;
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;
    if (A + B + C != 180)
    {
        throw std::runtime_error("сумма углов не равна 180 градусам");
    }
}
std::string  Triangle::GetName()
{
    return name;
}
void Triangle::Sides()
{
    std::cout << "Стороны: " << "a = " << a << " b = " << b << " c = " << c << std::endl;

}
void Triangle::Angles()
{
    std::cout << "Углы: " << " A = " << A << " B = " << B << " C = " << C << std::endl;
}
void Triangle::print()
{
    std::cout << GetName() << ":" << std::endl;
    Sides();
    Angles();
}
