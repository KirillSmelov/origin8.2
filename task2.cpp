#include <iostream>
#include <string>
#include <Windows.h>
#include "Exception.h"
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

}