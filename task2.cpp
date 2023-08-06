#include <iostream>
#include <string>
#include <Windows.h>
#include<exception>
#include "Figure.h"
#include "Triangle.h"
#include "Triangle90.h"
#include "IsoscelesTriangle.h"
#include "Triangle60.h"
#include "Quadrangle.h"
#include "Parallelogram.h"
#include "Recangle.h"
#include "Rhomb.h"
#include "Square.h"
void print(Figure* figure)
{
	figure->print();
}


int main(int argc, char** argv)
{
	system("chcp 1251");
	try 
	{
		Triangle Triangle(3, 5, 6, 175, 40, 65);
		print(&Triangle);
	}
	catch (const Triangle& ex)
	{
		
		std::cout << ex.what() << std::endl;
	}
}