#pragma once
#include "Parallelogram.h"
class Rhomb :public Parallelogram
{
protected:
	std::string name = "����";
public:
	Rhomb(int a, int A, int B);
	std::string GetName() override;

};
