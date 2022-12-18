#include <iostream>
using namespace std;


void inP (long long &n, long long a[1001][1001])
{
	cin >> n;
	for (long long i = 0; i < n; i++)
	{
		for (long long j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
}

long long ChuVi(long n, long long a[1001][1001])
{
	long long count = 0, countLand = 0;
	for (long long i = 0; i < n ; i++)
	{
		for (long long j = 0; j < n; j++)
		{
			if (a[i][j] == 1)
			{
				countLand++;
				if (a[i + 1][j] == 1)
					count++;
				if (a[i - 1][j] == 1)
					count++;
				if (a[i][j + 1] == 1)
					count++;
				if (a[i][j - 1] == 1)
					count++;
			}
		}
	}
	return countLand*4 - count;
}

int main ()
{
	long long n, a[1001][1001];
	inP(n, a);
	cout << ChuVi(n, a);
	return 0;
}
