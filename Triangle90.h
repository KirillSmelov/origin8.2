#pragma once
#pragma once
#include "Triangle.h"
class Triangle90 :public Triangle
{
protected:
	std::string name = "Прямоугольный треугольник";
public:
	Triangle90(int a, int b, int c, int A, int B);
	std::string GetName() override;
	
};