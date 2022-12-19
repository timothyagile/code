#include <iostream>
#include <cmath>
#include <queue>
using namespace std;

void Nhap (string &s)
{
	cout << "Nhap chuoi hanh dong: ";
	cin >> s;
}

void Move (string s, int &x, int &y)
{
	queue <char> q;
	queue <int> num;
	queue <char> pressWhat;
	int n = 0;
	for (int i = 0; i < s.size(); i++)
	{
		q.push(s[i]);
	}
	
	for (int i = 0; i < s.size(); i++)
	{
		if (q.front() <= 57)
		{
			n = n * 10 + (q.front() - 48);
			q.pop();
		}
		else 
		{
		pressWhat.push(q.front());
		num.push(n);
		q.pop();
		n = 0;	
		}
	}
	while (!pressWhat.empty())
	{
		if (pressWhat.front() == 'w')
		{
			y += num.front();
			num.pop();
			pressWhat.pop();
		}
		if (pressWhat.front() == 's')
		{
			y -= num.front();
			num.pop();
			pressWhat.pop();
		}
		if (pressWhat.front() == 'd')
		{
			x += num.front();
			num.pop();
			pressWhat.pop();
		}
		if (pressWhat.front() == 'a')
		{
			x -= num.front();
			num.pop();
			pressWhat.pop();
		}
	}
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
	Move(s, x, y);
	cout << Distance(x, y);
	return 0;
}
