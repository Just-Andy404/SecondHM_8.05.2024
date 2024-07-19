#pragma once
#include <iostream>
using namespace std;

class Figure
{
	string _figure;
public:
	Figure(string);
	string getF();
	virtual float square() = 0;
};