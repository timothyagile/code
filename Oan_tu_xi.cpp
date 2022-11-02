#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main ()
{
	for (int i = 0; i < 100; i++)
	{
	int j;
	int flag;
	srand(time(NULL));
	j = rand() % (3 - 1 + 1) + 1; // % (max - min + 1) + minbua
	
	string input;
	cin >> input;
	
	if (input == "keo")
		flag = 1;		
	if (input == "bua")
		flag = 2;
	if (input == "bao")
		flag = 3;
	
	if (input != "keo" && input != "bua" && input != "bao")
		cout << "loi, nhap lai" << endl;
	else
	{
		if (j == 1)
			cout << "may ra keo" << endl;
		if (j == 2)
			cout <<"may ra bua" << endl;
		if (j == 3)
			cout <<"may ra bao" << endl;
	
		if (flag == j)
		cout <<"hoa" << endl;
	else 
	{
		if (flag - j == 2)
			cout <<"ban thua"<< endl;
		if (flag - j == -2)
			cout << "ban thang" << endl;
		else 
		{
			
			if (flag > j && flag - j != 2)
				cout << "ban thang" << endl;
			else 
				cout <<"thua" << endl;		
		}
	}
	}
	
}
	return 0;
}
