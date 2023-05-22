#include "Menu.h"
#include "Rectangle.h"
#include "Sexangle.h"
#include <iostream>
#include <stdlib.h>

int Menu::CreateId(Rectangle rect)
{
	if (!rectangles.empty())
	{
		Rectangle r = rectangles.back();
		return r.GetId() + 1;
	}
	return 0;
}

int Menu::CreateId(Sexangle sexa)
{
	if (!sexangles.empty())
	{
		Sexangle s = sexangles.back();
		return s.GetId() + 1;
	}
	return 0;
}

void Menu::Create()
{
	system("cls");
	cout << "1 - ������� �������������\n2 - ������� �������������\n\n0 - �����\n";
	int value;
	cin >> value;
	switch (value)
	{
	case(0):
		break;
	case(1):
	{
		Rectangle rect;
		rect.Create();
		rect.SetId(CreateId(rect));
		rectangles.push_back(rect);
		break;
	}
	case(2):
	{
		Sexangle sexa;
		sexa.Create();
		sexa.SetId(CreateId(sexa));
		sexangles.push_back(sexa);
		break;
	}
	default:
		Create();
		break;
	}
}

void Menu::DeleteRectangle(int value)
{
	rectangles.remove_if([value](Rectangle r) { return r.GetId() == value; });
}

void Menu::DeleteSexangle(int value)
{
	sexangles.remove_if([value](Sexangle s) { return s.GetId() == value; });
}

void Menu::Delete()
{
	int value = -1;
	while (value != 0)
	{
		system("cls");
		cout << "1 - ������� �������������\n2 - ������� �������������\n\n0 - �����\n";
		cin >> value;
		int v;
		switch (value)
		{
		case(1):
		{
			system("cls");
			cout << "������� id ��������������:\n";
			cin >> v;
			DeleteRectangle(v);
			break;
		}
		case(2):
		{
			system("cls");
			cout << "������� id ��������������:\n";
			cin >> v;
			DeleteSexangle(v);
			break;
		}
		default:
			break;
		}
	}
}

void Menu::ShowAllShapes()
{
	int value = -1;
	while (value != 0)
	{
		system("cls");
		cout << "��������������:\n\n";
		for (Rectangle r : rectangles)
		{
			cout << "ID - " << r.GetId() << endl
				<< "1-�� ������� - " << r.GetX1() << " " << r.GetY1() << endl
				<< "2-�� ������� - " << r.GetX2() << " " << r.GetY2() << endl << endl;
		}

		cout << "\n��������������:\n\n";
		for (Sexangle s : sexangles)
		{
			cout << "ID - " << s.GetId() << endl
				<< "1-�� ������� - " << s.GetX1() << " " << s.GetY1() << endl
				<< "2-�� ������� - " << s.GetX2() << " " << s.GetY2() << endl
				<< "3-�� ������� - " << s.GetX3() << " " << s.GetY3() << endl
				<< "4-�� ������� - " << s.GetX4() << " " << s.GetY4() << endl
				<< "5-�� ������� - " << s.GetX5() << " " << s.GetY5() << endl
				<< "6-�� ������� - " << s.GetX6() << " " << s.GetY6() << endl << endl;
		}
		cout << "\n0 - �����\n";
		cin >> value;
	}
}

void Menu::ShowRectangle(int value)
{
	int v = 1;
	while (v !=  0)
	{
		system("cls");
		for (Rectangle r : rectangles)
		{
			if (r.GetId() == value)
				cout << "ID - " << r.GetId() << endl
				<< "1-�� ������� - " << r.GetX1() << " " << r.GetY1() << endl
				<< "2-�� ������� - " << r.GetX2() << " " << r.GetY2() << endl << endl;
		}
		cout << "\n0 - �����\n";
		cin >> v;
	}
}

void Menu::ShowSexangle(int value)
{
	int v = 1;
	while (v != 0)
	{
		system("cls");
		for (Sexangle s : sexangles)
		{
			if (s.GetId() == value)
				cout << "ID - " << s.GetId() << endl
					<< "1-�� ������� - " << s.GetX1() << " " << s.GetY1() << endl
					<< "2-�� ������� - " << s.GetX2() << " " << s.GetY2() << endl
					<< "3-�� ������� - " << s.GetX3() << " " << s.GetY3() << endl
					<< "4-�� ������� - " << s.GetX4() << " " << s.GetY4() << endl
					<< "5-�� ������� - " << s.GetX5() << " " << s.GetY5() << endl
					<< "6-�� ������� - " << s.GetX6() << " " << s.GetY6() << endl << endl;
		}	
		cout << "\n0 - �����\n";
		cin >> v;
	}
}

void Menu::Show()
{
	int v = 1;
	while (v != 0)
	{
		system("cls");
		cout << "1 - �������� ��� �������\n2 - �������� �������������\n3 - �������� �������������\n\n0 - �����\n";
		int value;
		cin >> v;
		switch (v)
		{
		case(1):
		{
			ShowAllShapes();
			break;
		}
		case(2):
		{
			system("cls");
			cout << "������� id ��������������: ";
			cin >> value;
			ShowRectangle(value);
			break;
		}
		case(3):
		{
			system("cls");
			cout << "������� id ��������������: ";
			cin >> value;
			ShowSexangle(value);
			break;
		}
		default:
			break;
		}
	}
}

void Menu::VerificationRectangle()
{
	system("cls");
	int v = -1;
	while (v != 0)
	{
		int a;
		cout << "������� id �������������� ��� ��������: ";
		cin >> a;
		for (Rectangle r : rectangles)
		{
			if (r.GetId() == a)
			{
				cout << "ID - " << r.GetId() << endl
					<< "1-�� ������� - " << r.GetX1() << " " << r.GetY1() << endl
					<< "2-�� ������� - " << r.GetX2() << " " << r.GetY2() << endl << endl;
				break;
			}
		}
		cout << "0 - �����\n";
		cin >> v;
	}
}

void Menu::VerificationSexangle()
{
	system("cls");
	int v = -1;
	while (v != 0)
	{
		int a;
		cout << "������� id �������������� ��� ��������: ";
		cin >> a;
		for (Sexangle s : sexangles)
		{
			if (s.GetId() == a)
			{
				cout << "ID - " << s.GetId() << endl
					<< "1-�� ������� - " << s.GetX1() << " " << s.GetY1() << endl
					<< "2-�� ������� - " << s.GetX2() << " " << s.GetY2() << endl
					<< "3-�� ������� - " << s.GetX3() << " " << s.GetY3() << endl
					<< "4-�� ������� - " << s.GetX4() << " " << s.GetY4() << endl
					<< "5-�� ������� - " << s.GetX5() << " " << s.GetY5() << endl
					<< "6-�� ������� - " << s.GetX6() << " " << s.GetY6() << endl << endl;
					
				break;
			}
		}
		cout << "0 - �����\n";
		cin >> v;
	}
}

void Menu::Verification()
{
	int v = -1;
	while (v != 0)
	{
		system("cls");
		cout << "1 - ��������� ������������� ��������������\n2 - ��������� ������������� ��������������\n\n0 - �����\n";
		cin >> v;
		if (v == 1)
		{
			VerificationRectangle();
		}
		else if (v == 2)
		{
			VerificationSexangle();
		}
	}
}

void Menu::MoveRectangle()
{
	system("cls");
	int v;
	cout << "������� id ��������������: ";
	cin >> v;
	for (Rectangle &r : rectangles)
	{
		if (r.GetId() == v)
		{
			r.Move();
		}
	}
}

void Menu::MoveSexangle()
{
	system("cls");
	int v;
	cout << "������� id ��������������: ";
	cin >> v;
	for (Sexangle &r : sexangles)
	{
		if (r.GetId() == v)
		{
			r.Move();
		}
	}
}

void Menu::Move()
{
	int v = -1;
	while (v != 0)
	{
		system("cls");
		cout << "1 - ��������� �������������\n2 - ��������� �������������\n\n0 - �����\n";
		cin >> v;
		if (v == 1)
		{
			MoveRectangle();
		}
		else if (v == 2)
		{
			MoveSexangle();
		}
	}
}

bool Menu::IntersectRectangle()
{
	system("cls");
	cout << "������� id 1-�� ��������������: ";
	int id1;
	cin >> id1;
	cout << "������� id 2-�� ��������������: ";
	int id2;
	cin >> id2;
	for (Rectangle r : rectangles)
	{
		if (r.GetId() == id1)
		{
			for (Rectangle f : rectangles)
			{
				if (f.GetId() == id2)
				{
					if (r.GetX1() - f.GetX1() < 0 && r.GetY1() - f.GetY1() < 0 ||
						r.GetX2() - f.GetX2() < 0 && r.GetY2() - f.GetY2() < 0)
						return true;
				}
			}
		}
	}
	return false;
}

bool Menu::IntersectSexangle()
{
	system("cls");
	cout << "������� id 1-�� ��������������: ";
	int id1;
	cin >> id1;
	cout << "������� id 2-�� ��������������: ";
	int id2;
	cin >> id2;
	for (Sexangle r : sexangles)
	{
		if (r.GetId() == id1)
		{
			for (Sexangle f : sexangles)
			{
				if (f.GetId() == id2)
				{
					if (r.GetX1() - f.GetX1() < 0 && r.GetY1() - f.GetY1() < 0 ||
						r.GetX2() - f.GetX2() < 0 && r.GetY2() - f.GetY2() < 0 ||
						r.GetX3() - f.GetX3() < 0 && r.GetY3() - f.GetY3() < 0 ||
						r.GetX4() - f.GetX4() < 0 && r.GetY4() - f.GetY4() < 0 ||
						r.GetX5() - f.GetX5() < 0 && r.GetY5() - f.GetY5() < 0 ||
						r.GetX6() - f.GetX6() < 0 && r.GetY6() - f.GetY6() < 0)
						return true;
				}
			}
		}
	}
	return false;
}

void Menu::Intersect()
{
	system("cls");
	int v = -1;
	while (v != 0)
	{
		cout << "1 - ��������� ��������������\n2 - ��������� ��������������\n\n0 - �����\n";
		cin >> v;
		if (v == 1)
		{
			if (IntersectRectangle()) cout << "������������\n\n";
			else cout << "�� ������������\n\n";
		}
		else if (v == 2)
		{
			if (IntersectSexangle()) cout << "������������\n\n";
			else cout << "�� ������������\n\n";
		}
	}
}