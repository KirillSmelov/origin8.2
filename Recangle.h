#pragma once
#include"Parallelogram.h"
class Recangle :public Parallelogram
{
protected:
	std::string name = "�������������";
public:
	Recangle(int a, int b);
	std::string GetName() override;
};