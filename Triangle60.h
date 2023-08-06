#pragma once
#include"Triangle.h"
class Triangle60 :public Triangle
{
protected:
	std::string name = "равносторонний треугольник";
public:
	Triangle60(int a);
	Triangle60();
	std::string GetName() override;
	
};