#include <iostream>
using namespace std;

void Nhap(int &n)
{
	cin >> n;
}

int Sum(int n)
{
	if (n == 0)
		return 0;
	return n + Sum(n - 1);
}

int main ()
{
	int n;
	Nhap(n);
	int sum = Sum(n);
	cout << sum;
	return 0;
}
