#include <iostream>
#include "Complex.h"
#include "Matrix.h"
#include "Vector.h"
#include "Sum.h"
using namespace std;
int main()
{
	Complex c(2, 4, 6, 8);
	int vect1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int vect2[10] = { 3, 5 ,6 ,6, 5, 3, 1, 7, 5, 3 };
	Vector v(vect1, vect2);

	int a[2][2] = { {1, 2}, {3, 4} };
	int b[2][2] = { {5, 6}, {7, 8} };
	Matrix m(a, b);

	cout << "complex sum = ";c.sum();
	cout << endl;

	cout << "vector sum = " << endl; v.sum();
	cout << endl;

	cout << "matrix sum = " << endl;m.sum();
	cout << endl;

	Sum* matr[3];
	matr[0] = &c;
	matr[1] = &v;
	matr[2] = &m;

	cout << "complex sum: "; matr[0]->sum(); cout << endl;
	cout << "vector sum: " << endl; matr[1]->sum(); cout << endl;
	cout << "matrix sum: " << endl; matr[2]->sum(); cout << endl;
}