#pragma once
#include "Rhomb.h"
class Square :public Rhomb
{
protected:
	std::string name = " вадрат";
public:
	Square(int a);
	std::string GetName() override;
	
};