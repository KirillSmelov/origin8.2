#include "IsoscelesTriangle.h"
IsoscelesTriangle::IsoscelesTriangle(int a, int b, int A, int B) :Triangle(a, b, a, A, B, A)
{
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;
}
std::string IsoscelesTriangle::GetName()
{
    return name;
}
/*void IsoscelesTriangle::method()
{
    std::string error = "������� a � c �� ����� ��� ���� A � C �� �����";
    if (a != c || A != C)
    {
        throw error;
    }
    else {}
}*/