#include <iostream>
using namespace std;

void outPut (int a[], int length)
{
	if (a[length] == 1)
		cout << a[length];
	for (int i = length - 1; i >= 0; i--)
	{
		cout << a[i];
	}
}

void input (int a[], int b[], int &length)
{
	int n, m;
	string s1, s2;
	cin >> n >> m;
	cin >> s1 >> s2;
	if (n < m)
		length = m;
	else
		length = n;
	for (int i = 0; i <= length; i++)
	{
		if (i < n)
			a[i] = s1[n - 1 -i] - 48;
		else
			a[i] = 0;
	}
	for (int i = 0; i <= length; i++)
	{
		if (i < m)
			b[i] = s2[m - i - 1] - 48;
		else
			b[i] = 0;
	}
}

void sumOfBinary(int a[], int b[], int c[], int length)
{
	int memBit = 0;
	int temp;
	for (int i = 0; i <= length; i++)
	{
		temp = a[i] + b[i] + memBit;
		if (temp <= 1)
		{
			c[i] = temp;
			memBit = 0;
		}
		if (temp == 2)
		{
			c[i] = 0;
			memBit = 1;
		}
		if (temp == 3)
		{
			c[i] = 1;
			memBit = 1;
		}
	}
}

int main ()
{
	int length, a[10001], b[10001], c[10001];
	input (a, b, length);
	sumOfBinary (a, b, c, length);
	outPut (c, length);
	return 0;
}
