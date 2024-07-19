#pragma once
#include <iostream>
#include "Figure.h"
using namespace std;

class Rectangle :public Figure
{
	int _sizeA;
	int _sizeB;
public:
	Rectangle(int, int);
	float square();
};