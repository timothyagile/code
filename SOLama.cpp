#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int dinhNghia (char);
void chuyenDoi (string);

int main ()
{
	string s;
	chuyenDoi(s);
	return 0;
}
int dinhNghia (char c)
{
	switch (c)
{
	case 'I':
		return 1;
		break;
	case 'V':
		return 5;
		break;
	case 'X':
		return 10;
		break;
	case 'L':
		return 50;
		break;
	case 'C':
		return 100;
		break;
	case 'D':
		return 500;
		break;
	case 'M':
		return 1000;
		break;
}
}
void chuyenDoi (string s)
{
	getline(cin, s);
	int natural;
	for (int i = 0; i < s.size(); i++)
	{
		if (dinhNghia(s[i]) >= dinhNghia(s[i + 1]))
			natural += dinhNghia(s[i]);
		else 
			natural -= dinhNghia(s[i]);
	}
	cout << natural;
}
