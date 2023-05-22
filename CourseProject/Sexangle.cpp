#include "Sexangle.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

Sexangle::Sexangle() {
	x1 = 0;
	x2 = 0;
	x3 = 0;
	x4 = 0;
	x5 = 0;
	x6 = 0;
	y1 = 0;
	y2 = 0;
	y3 = 0;
	y4 = 0;
	y5 = 0;
	y6 = 0;
	id = 0;
}

Sexangle::Sexangle(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int x5, int y5, int x6, int y6, int id)
{
	this->x1 = x1;
	this->x2 = x2;
	this->x3 = x3;
	this->x4 = x4;
	this->x5 = x5;
	this->x6 = x6;
	this->y1 = y1;
	this->y2 = y2;
	this->y3 = y3;
	this->y4 = y4;
	this->y5 = y5;
	this->y6 = y6;
	this->id = id;
}

void Sexangle::Create()
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
	cout << "Введите x3: ";
	cin >> x3;
	cout << "Введите y3: ";
	cin >> y3;
	cout << "Введите x4: ";
	cin >> x4;
	cout << "Введите y4: ";
	cin >> y4;
	cout << "Введите x5: ";
	cin >> x5;
	cout << "Введите y5: ";
	cin >> y5;
	cout << "Введите x6: ";
	cin >> x6;
	cout << "Введите y6: ";
	cin >> y6;
}

void Sexangle::Move()
{
	int _x1, _x2, _y1, _y2, _x3, _x4, _y3, _y4, _x5, _x6, _y5, _y6;
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
	cout << "Подвинуть по x3: ";
	cin >> _x3;
	x3 += _x3;
	cout << "Подвинуть по y3: ";
	cin >> _y3;
	y3 += _y3;
	cout << "Подвинуть по x4: ";
	cin >> _x4;
	x4 += _x4;
	cout << "Подвинуть по y4: ";
	cin >> _y4;
	y4 += _y4;
	cout << "Подвинуть по x5: ";
	cin >> _x5;
	x5 += _x5;
	cout << "Подвинуть по y5: ";
	cin >> _y5;
	y5 += y5;
	cout << "Подвинуть по x6: ";
	cin >> _x6;
	x6 += _x6;
	cout << "Подвинуть по y6: ";
	cin >> _y6;
	y6 += _y6;
}

int Sexangle::GetX1()
{
	return x1;
}

int Sexangle::GetX2()
{
	return x2;
}

int Sexangle::GetX3()
{
	return x3;
}

int Sexangle::GetX4()
{
	return x4;
}

int Sexangle::GetX5()
{
	return x5;
}

int Sexangle::GetX6()
{
	return x6;
}

int Sexangle::GetY1()
{
	return y1;
}

int Sexangle::GetY2()
{
	return y2;
}

int Sexangle::GetY3()
{
	return y3;
}

int Sexangle::GetY4()
{
	return y4;
}

int Sexangle::GetY5()
{
	return y5;
}

int Sexangle::GetY6()
{
	return y6;
}

int Sexangle::GetId()
{
	return id;
}

void Sexangle::SetId(int id)
{
	this->id = id;
}