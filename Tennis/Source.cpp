#include "console_painter.h"

#include <iostream>
#include "Shape.h"

using namespace std;

//void main()
//{
//	setCursorVisibility(false);
//
//	for (int i = 0; i < 10000; i++) {
//		printat((i % 25 + i*i % 25 + i*i*i % 30) % 50, i % 20, "*****");
//		pause(100);
//		system("cls");
//	}
//	waitAnyKey();
//}


//int main() {
//
//	char c = -1;
//	Shape *newShape = nullptr;
//	cin >> c;
//	switch (c)
//	{
//	case '1':
//		newShape = new Pentagon();
//		break;
//	case '2':
//		newShape = new Square();
//		break;
//	default:
//		break;
//	}
//
//	newShape->draw();
//
//
//	system("pause");
//	return 0;
//}

int main() {

	setCursorVisibility(false);

	char c = -1;
	Shape *newShape = nullptr;
	cin >> c;
	switch (c)
	{
	case '1':
		newShape = new Pentagon();
		break;
	case '2':
		newShape = new Square();
		break;
	default:
		break;
	}

	newShape->draw(1,1);
		

	system("pause");
	return 0;
}