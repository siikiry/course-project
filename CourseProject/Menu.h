#pragma once
#include <list>
#include "Rectangle.h"
#include "Sexangle.h"
using namespace std;
class Menu
{
private:
	list <Rectangle> rectangles;
	list <Sexangle> sexangles;
	int CreateId(Rectangle rect);
	int CreateId(Sexangle sexa);
	void DeleteRectangle(int value);
	void DeleteSexangle(int value);
	void ShowAllShapes();
	void ShowRectangle(int value);
	void ShowSexangle(int value);
	void VerificationRectangle();
	void VerificationSexangle();
	void MoveRectangle();
	void MoveSexangle();
	bool IntersectRectangle();
	bool IntersectSexangle();
public:
	void Create();
	void Delete();
	void Show();
	void Verification();
	void Move();
	void Intersect();
};

