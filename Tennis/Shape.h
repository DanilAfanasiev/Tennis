#pragma once

#include "console_painter.h"


class Shape
{
public:
	Shape(int l, int w);
	virtual void draw(int x, int y) = 0;

protected:
	const int console_l = 30;
	const int console_w = 30;
	int l;
	int w;
};


class Pentagon : public Shape
{
public:
	Pentagon();
	void draw(int x, int y);

private:
};

class Square : public Shape
{
public:
	Square();
	void draw(int x, int y);

private:
};
