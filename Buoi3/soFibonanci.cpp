#include <iostream>
using namespace std;

void inP (int &n)
{
	cin >> n;
}

long long soFib (int n)
{
	long long a = 0, b = 1, fibo = 1;
	for (int i = 1; i < n; i++)
	{
		fibo = a + b;
		a = b;
		b = fibo;
	}
	return fibo; 
}

int main ()
{
	int n;
	inP(n);
	cout << soFib(n);
	return 0;
}
