#include "Shape.h"

#include <iostream>
using namespace std;

Shape::Shape(int l,int w)
{
	this->l = l;
	this->w = w;
}


void Shape:: move(int x0, int y0) {
	int flag1 =1;
	int flag2 = 1;

	for (int i = 0; i < 10000; i++) {

		x0 = x0 + flag1;
		y0 = y0 + flag2;

		if (y0 < 0) {
			flag2 = (-1)*flag2;
			y0 = 0;
		}

		if (x0 < 0) {
			flag1 = (-1)*flag1;
			x0 = 0;
		}

		if (y0 + l > console_l) {
			flag2 = (-1)*flag2;
			y0 = console_l - l;
		}

		if (x0 + w > console_w) {
			flag1 = (-1)*flag1;
			x0 = console_w - w;
		}

		draw(x0, y0);
		pause(20);
		system("cls");
	}
}

Square::Square() : Shape(5,5)
{

}


void Square::draw(int x, int y)
{
	printat(x, y, "*");
	printat(x+1, y, "*"); 
	printat(x+2, y, "*");
	printat(x+3, y, "*");
	printat(x+4, y, "*");
	printat(x+4, y+1, "*");
	printat(x+4, y+2, "*");
	printat(x + 4, y+3, "*");
	printat(x + 4, y+4, "*");
	printat(x + 3, y + 4, "*");
	printat(x + 2, y + 4, "*");
	printat(x + 1, y + 4, "*");
	printat(x, y + 4, "*");
	printat(x, y + 3, "*");
	printat(x, y + 2, "*");
	printat(x, y + 1, "*");

}

Pentagon::Pentagon() : Shape(5,4)
{

}

void Pentagon::draw(int x, int y)
{
	printat(x+2, y, "*");
	printat(x , y+1, "*");
	printat(x + 4, y+1, "*");
	printat(x + 1, y+3, "*");
	printat(x + 3, y+3, "*");
	

}