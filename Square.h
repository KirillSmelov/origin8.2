#pragma once
#include "Rhomb.h"
class Square :public Rhomb
{
protected:
	std::string name = "�������";
public:
	Square(int a);
	std::string GetName() override;
	
};