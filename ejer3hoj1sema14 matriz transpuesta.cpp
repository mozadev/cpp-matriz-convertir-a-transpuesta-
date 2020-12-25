#include "stdafx.h"
#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
#include <Windows.h>
#include <iomanip>

using namespace std;
using namespace System;


int ingresapos()
{
	int n; cout << "ingrese positivo"; cin >> n;
	while (n <= 0 || n > 10)
	{
		int n; cout << "ingrese positivo"; cin >> n;
	}return n;

}

void ingresadatos(int *n, int *m, int **transpuesta)
{
	for (int i = 0; i < *n; i++)
		for (int j = 0; j < *m; j++)
		{
			cout << "ingrese dato [" << i + 1 << "][" << j + 1 << "]:";
			cin >> transpuesta[i][j];
		}
}


void salidadatos(int *n, int *m, int **transpuesta)
{
	cout << "matriz original" << endl;
	for (int i = 0; i < *n; i++)
	{
		for (int j = 0; j < *m; j++)
			cout << transpuesta[i][j] << " ";
		cout << endl;
	}
}

void hallatranspuesta(int *n, int *m, int **transpuesta)
{
	cout << "matriz transpuesta" << endl;
	for (int i = 0; i < *m; i++)
	{
		for (int j = 0; j < *n; j++)
			cout << transpuesta[j][i] << " ";
		cout << endl;
	}
}


int main()
{
	int n, m;
	n = ingresapos();
	m = ingresapos();
	int **transpuesta;
	transpuesta = new int *[n];
	for (int i = 0; i < n; i++)
		transpuesta[i] = new int[m];
	ingresadatos(&n, &m, transpuesta);
	salidadatos(&n, &m, transpuesta);
	hallatranspuesta(&n, &m, transpuesta);

	_getch();

}