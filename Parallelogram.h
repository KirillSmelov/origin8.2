#pragma once
#include "Quadrangle.h"
class Parallelogram :public Quadrangle
{
protected:
	std::string name = "�������������";
public:
	Parallelogram(int a, int b, int A, int B);
	std::string GetName() override;
};