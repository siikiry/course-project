#pragma once
#include "Shape.h"
class Sexangle:public Shape
{
private:
	int x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, id;
public:
	Sexangle();
	Sexangle(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int x5, int y5, int x6, int y6, int id);
	void Create();
	void Move();
	int GetX1();
	int GetY1();
	int GetX2();
	int GetY2();
	int GetX3();
	int GetY3();
	int GetY4();
	int GetX4();
	int GetX5();
	int GetY5();
	int GetX6();
	int GetY6();
	int GetId();
	void SetId(int id);
};