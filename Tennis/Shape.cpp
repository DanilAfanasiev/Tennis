#include "Shape.h"

#include <iostream>
using namespace std;

Shape::Shape(int l,int w)
{
	this->l = l;
	this->w = w;
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