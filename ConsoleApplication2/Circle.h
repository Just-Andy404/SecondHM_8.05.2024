#pragma once
#include <iostream>
#include "Figure.h"
#include <cmath>
using namespace std;

class Circle1 :public Figure
{
	float _radius;
	const float PI;
public:
	Circle1(float);
	float square();
};