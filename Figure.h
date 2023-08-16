#pragma once
#include<string>
#include<exception>
class Figure 
{
protected:
	std::string name = "Фигура";
public:
	Figure();
	virtual void Sides();
	virtual void Angles();
	virtual void print();
	
};