#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


struct Gold 
{
	float x;
	float y;
};
//--------------------------------------------
void inPut (Gold [], int&);
int findWay(Gold, Gold);
void time (Gold[], int);

int main() 
{
	int n;
    Gold g[101];
    inPut(g, n);
    time(g, n);
    return 0;
}
//--------------------------------------------
void inPut (Gold g[], int &n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> g[i].x >> g[i].y;
	}
}

int findWay (Gold g1, Gold g2)
{
	int step = 0;
	if (abs(g1.x - g2.x) > abs(g1.y - g2.y))
	{
		step += abs(g1.x - g2.x);
	}
	else
	{
		step += abs(g1.y - g2.y);
	}
	return step;
}

void time (Gold g[], int n)
{
	int t = 0;
	for (int i = 0; i < n - 1; i++)
	{
		t += findWay(g[i], g[i + 1]);	
		
	}
	cout << t;
}

