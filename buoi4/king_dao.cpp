#include <iostream>
using namespace std;

void inputString(string &s1, int &n1, string &s2, int &n2)
{
	cin >> n1 >> n2 >> s1 >> s2;
}
/*void remove (string s, int index, int n)
{
	for (int i = index; i < n; i++)
	{
		s[i] = s[i + 1];
	}
}*/
void xuatMang(string s)
{
	for (int i = 0; i , s.size(); i++)
	{
		cout << s[i] << " ";
	}
}
bool allZero (string s)
{
	bool flag = 1;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] != '0')
			flag = 0;
	}
	return flag;
}
bool check(string &s1, int n1, string &s2, int n2)
{
	bool kq = 0;
	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j < n2; j++)
		{
			if (s1[i] == s2[j])
			{
				s1[i] = '0';
				s2[j] = '0';
			}	
		}
	}
	if (allZero(s1) == 1 && allZero(s2) == 1)
		kq = 1;
	return kq;
}
int main ()
{
	int n1, n2;
	string s1, s2;
	inputString(s1, n1, s2, n2);
	if (check(s1, n1, s2, n2) == 1)
		cout << "true";
	else 
		cout << "false";
//	xuatMang(s1);
//	xuatMang(s2);
	return 0;
}
