#include "Vector.h"
#include <iostream>
using namespace std;

Vector::Vector()
{
	for (int i = 0; i < 10; i++)
	{
		vect1[i] = 0;
		vect2[i] = 0;
	}
}
Vector::Vector(int vecto1[10], int vecto2[10])
{
	for (int i = 0; i < 10; i++)
	{
		vect1[i] = vecto1[i];
		vect2[i] = vecto2[i];
	}
}
int Vector::sum()
{
	int sum[10];
	
	for (int i = 0; i < 10; i++)
	{
		sum[i] = vect1[i] + vect2[i];
		cout << i + 1 << ": " << sum[i] << ";" << endl;
	}
	return 0;
}