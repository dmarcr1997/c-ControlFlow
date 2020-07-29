#include<iostream>
using namespace std;
int main() {
	double u[3] = { 1.0, 2.0, 3.0 };
	double v[3] = { 6.0, 5.0, 4.0 };
	double A[3][3] = {
		{1.0, 5.0, 0.0},
		{7.0, 1.0, 2.0},
		{0.0, 0.0, 1.0}
	};
	double B[3][3] = {
		{-2.0, 0.0, 1.0},
		{1.0, 0.0, 0.0},
		{4.0, 1.0, 0.0}
	};

	double x[3];
	double y[3];
	double z[3];
	double C[3][3];
	double D[3][3];
	double dotSum = 0;
	for (int i = 0; i < 3; i++) {
		x[i] = u[i] - v[i];
		cout << x[i] << endl;
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			dotSum += A[i][j] * u[j];
		}
		y[i] = dotSum;
		dotSum = 0;
		cout << y[i] << endl;
	}
	for (int i = 0; i < 3; i++)
	{
		z[i] = y[i] - v[i];
		cout << z[i] << endl;
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			C[i][j] = (4 * A[i][j]) - (3 * B[i][j]);
			cout << C[i][j] << " ";
		}
		cout << endl;
	}
	int count = 0;
	double  dotProd = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				dotProd += A[i][k] * B[k][j];
			}
			D[i][j] = dotProd;
			dotProd = 0;
			cout << D[i][j] << " ";
		}
		cout << endl;
	}
	

	return 0;
}