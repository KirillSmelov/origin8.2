#pragma once
#include "Parallelogram.h"
class Rhomb :public Parallelogram
{
protected:
	std::string name = "Ромб";
public:
	Rhomb(int a, int A, int B);
	std::string GetName() override;

};
