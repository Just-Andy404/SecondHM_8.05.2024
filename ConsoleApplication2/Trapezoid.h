#pragma once
#include <iostream>
#include "Figure.h"
using namespace std;

class Trapezoid :public Figure
{
	int _sizeA;
	int _sizeB;
	int _height;
public:
	Trapezoid(int, int, int);
	float square();
};