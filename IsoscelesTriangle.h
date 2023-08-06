#pragma once
#include "Triangle.h"
class IsoscelesTriangle :public Triangle
{
protected:
    std::string name = "Равнобедренный треугольник";
public:
    IsoscelesTriangle(int a, int b, int A, int B);
    std::string GetName() override;
    
};