#pragma once
#include "Triangle.h"
class IsoscelesTriangle :public Triangle
{
protected:
    std::string name = "�������������� �����������";
public:
    IsoscelesTriangle(int a, int b, int A, int B);
    std::string GetName() override;
    
};