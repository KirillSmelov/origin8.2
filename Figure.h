#pragma once
#include<string>
#include<exception>
class Figure :public std::exception
{
protected:
	std::string name = "������";
public:
	Figure();
	virtual void Sides();
	virtual void Angles();
	virtual void print();
	
};