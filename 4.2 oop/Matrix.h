#pragma once
#include "Sum.h"
class Matrix :
    public Sum
{
	int a1[2][2], a2[2][2];
public:
	Matrix();
	Matrix(int matr1[2][2], int matr2[2][2]);
	~Matrix() {}
	int getA1(int, int) { return a1[2][2]; }
	int getA2(int, int) { return a2[2][2]; }

	int sum()  override;
};

