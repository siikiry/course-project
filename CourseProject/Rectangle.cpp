#include "Rectangle.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

Rectangle::Rectangle() {
	this->x1 = 0;
	this->x2 = 0;
	this->y1 = 0;
	this->y2 = 0;
	this->id = 0;
}

Rectangle::Rectangle(int x1, int y1, int x2, int y2, int id) 
{
	this->id = id;
	this->x1 = x1;
	this->x2 = x2;
	this->y1 = y1;
	this->y2 = y2;
}

void Rectangle::Create()
{
	system("cls");
	cout << "Введите x1: ";
	cin >> x1;
	cout << "Введите y1: ";
	cin >> y1;
	cout << "Введите x2: ";
	cin >> x2;
	cout << "Введите y2: ";
	cin >> y2;
}

void Rectangle::Move()
{
	int _x1, _x2, _y1, _y2;
	system("cls");
	cout << "Подвинуть по x1: ";
	cin >> _x1;
	x1 += _x1;
	cout << "Подвинуть по y1: ";
	cin >> _y1;
	y1 += _y1;
	cout << "Подвинуть по x2: ";
	cin >> _x2;
	x2 += _x2;
	cout << "Подвинуть по y2: ";
	cin >> _y2;
	y2 += _y2;
}

int Rectangle::GetX1()
{
	return x1;
}

int Rectangle::GetX2()
{
	return x2;
}

int Rectangle::GetY1()
{
	return y1;
}

int Rectangle::GetY2()
{
	return y2;
}

int Rectangle::GetId()
{
	return id;
}

void Rectangle::SetId(int id)
{
	this->id = id;
}