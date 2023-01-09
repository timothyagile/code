#include <iostream>
using namespace std;

void inputString (string &s, int &n)
{
	cin >> n;
	cin >> s;
}
void outputString(string s, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << s[n - 1 - i];
	}
}
int main ()
{
	string s;
	int n;
	inputString (s, n);
	outputString(s, n);
	return 0;
}
