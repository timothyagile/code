#include <iostream>
using namespace std;

void inP(int &N)
{
	cin >> N;
}

long long C(int k, int n) {
 if (k == 0 || k == n) return 1; // C(0, n) = C(n, n) = 1
 if (k == 1) return n;           // C(1, n) = n
 return C(k - 1, n - 1) + C(k, n - 1); //cong thuc truy hoi 
}

int main ()
{
	int N;
	inP(N);
	long long theCase = 1; //tong so truong hop
	for (int i = 1; i <= N/2; i++)
	{
		long long s = C(i, N - i);
		theCase += s;
	}
	cout << theCase;
	return 0;
}
