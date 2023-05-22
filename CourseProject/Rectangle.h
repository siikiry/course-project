#pragma once
#include "Shape.h"

class Rectangle : public Shape
{
private:
	int id, x1, y1, x2, y2;
public:
	Rectangle();
	Rectangle(int x1, int y1, int x2, int y2, int id);
	void Create();
	void Move();
	int GetX1();
	int GetY1();
	int GetX2();
	int GetY2();
	int GetId();
	void SetId(int id);
};