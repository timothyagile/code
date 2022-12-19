#include <iostream>
#include <cmath>
using namespace std;

void Nhap (string &s)
{
	cout << "Nhap chuoi hanh dong: ";
	cin >> s;
}



void pressToMove (int n, char pressWhat, int &x, int &y)
{
	if (pressWhat == 'w')
		y += (n - 48);
	if (pressWhat == 's')
		y -= (n - 48);
	if (pressWhat == 'd')
		x += (n - 48);
	if (pressWhat == 'a')
		x -= (n - 48);
}

float Distance (int x, int y)
{
	return sqrt(x*x + y*y);
}

int main ()
{
	string s;
	int x = 0, y = 0;	
	Nhap(s);
	for (int i = 0; i < s.size(); i = i + 2)
	{
		pressToMove(s[i], s[i + 1], x, y);
	}
	cout << x << " " << y;
	return 0;
}
