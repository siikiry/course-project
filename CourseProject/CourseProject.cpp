#include <iostream>
#include "Menu.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int value = -1;
	Menu menu;
	while (value != 0 || true)
	{
		system("cls");
		cout << "1 - Создать фигуру\n2 - Удалить фигуру\n3 - Показать сведения о фигуре\n" <<
			"4 - Проверить существование фигуры\n5 - Переместить фигуру\n6 - Определить факт включения фигуры в другую фигуру\n\n0 - Выход\n";
		cin >> value;
		switch (value)
		{
		case(1): 
			menu.Create();
			break;
		case(2):
			menu.Delete();
			break;
		case(3):
			menu.Show();
			break;
		case(4):
			menu.Verification();
			break;
		case(5):
			menu.Move();
			break;
		case(6):
			menu.Intersect();
			break;
		default:
			break;
		}
	}
}