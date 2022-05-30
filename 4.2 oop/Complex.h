#pragma once
#include "Sum.h"
class Complex :
    public Sum
{
	int x1, x2, y1, y2;
public:
	Complex();
	Complex(int, int, int, int);
	~Complex() {}
	
	int getX1() { return x1; }
	int getX2() { return x2; }
	int getY1() { return y1; }
	int getY2() { return y2; }
	
	int sum() override;
};

