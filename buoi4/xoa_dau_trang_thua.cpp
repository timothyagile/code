#include <iostream>
#include <string>
using namespace std;

void inPut(string &s, long &n)
{
	cin >> n;
	cin.ignore();
	getline(cin, s);
}

void outPut(string s, long n)
{
	if (s[0] != 32)
		cout << s[0];
	long i = 1;
	int count = 0;
	while(i < n)
	{
		if (s[i] == 32)
		{
			count++;
			i++;
		}
		else
		{
			if (count == 0)
				cout << s[i];
			if (count >= 1)
			{
				cout << s[i - 1] << s[i];
				count = 0;
			}
			i++;
		}
	}
}
int main ()
{
	string s;
	long n;
	inPut(s, n);
	outPut(s, n);
	return 0;
}
