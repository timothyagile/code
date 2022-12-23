#include <iostream>
using namespace std;

void Nhap (int a[100][100], int &n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
}

void xoayAnh (int a[100][100], int b[100][100], int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = 0; j < n; j++)
		{
			b[j][n - 1 - i] = a[i][j]; 
		}
	}
}
void xuatMang (int b[100][100], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
}
int main ()
{
	int a[100][100], b[100][100], n;
	Nhap(a, n);
	xoayAnh(a, b, n);
	xuatMang (b, n);
	
}
