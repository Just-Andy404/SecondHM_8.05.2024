#pragma once
#include <iostream>
#include "Figure.h"
using namespace std;

class RightTriangle :public Figure
{
	int _sizeA;
	int _sizeB;
public:
	RightTriangle(int, int);
	float square();
};