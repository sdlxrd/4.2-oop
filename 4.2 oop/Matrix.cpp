#include "Matrix.h"
#include <iostream>
using namespace std;
Matrix::Matrix()
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			a1[i][j] = 0;
			a2[i][j] = 0;
		}
	}
}
Matrix::Matrix(int matr1[2][2], int matr2[2][2])
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			a1[i][j] = matr1[i][j];
			a2[i][j] = matr2[i][j];
		}
	}
}
int Matrix::sum()
{
	int sum[2][2];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			sum[i][j] = a1[i][j] + a2[i][j];
			cout << "(" << i + 1 << ", " << j + 1 << "): " << sum[i][j] << endl;
		}
	}
	return 0;
}