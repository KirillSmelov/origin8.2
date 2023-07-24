#pragma once
#include "Exception.h"
#include<string>
class Figure: public ISK
{
protected:
	std::string name = "Фигура";
public:
	Figure();
	virtual void Sides();
	virtual void Angles();
	virtual void print();
	void method() override
	{

	}
};