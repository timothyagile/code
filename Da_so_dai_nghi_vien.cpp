#include <iostream>
using namespace std;

int main ()
{
	string a[100];
	int n;
	int max = 0;
	int index;
	cin >> n;
	for (int i = 0; i < n; i ++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n - 1; i++)
	{
		int dem = 1;
		for (int j = 1; j < n; j ++)
		{
			if (a[j] == a[i])
			{
				dem++;
			}
		}
		if (dem > max)
		{
			max = dem;
			index = i;
		}
	}
	cout << a[index];
	return 0;
}
