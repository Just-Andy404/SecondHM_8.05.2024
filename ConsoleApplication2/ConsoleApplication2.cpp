/*
Создать абстрактный базовый класс с виртуальной
функцией - площадь. Создать производные классы: прямоугольник, круг, прямоугольный треугольник,
трапеция со своими функциями площади. Для проверки определить массив ссылок на абстрактный класс, 
которым присваиваются адреса различных объектов.
*/
#include <iostream>
#include "Figure.h"
#include "Rectangle.h"
#include "Circle.h"
#include "RightTriangle.h"
#include "Trapezoid.h"
using namespace std;


int main()
{
	Rectangle rect(20, 10);
	Circle1 circ(15.0f);
	RightTriangle trian(20, 15);
	Trapezoid trap(10, 15, 5);

	const int size = 4;
	Figure* arr[size] = { &rect ,&circ ,&trian ,&trap };

	arr[0] = &rect;
	arr[1] = &circ;
	arr[2] = &trian;
	arr[3] = &trap;

	for (int i = 0; i < size; i++) {
		cout << arr[i]->getF() << ": " << arr[i]->square() << endl;
	}

	return 0;
}