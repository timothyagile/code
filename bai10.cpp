#include <iostream>
#include <cmath>
using namespace std;
struct Point 
{
	float x;
	float y;
};

void Nhap(Point&);
float KhoangCach(Point, Point);
float XuLy();
float ChuVi(float, float , float );
int main()
{
	Point A, B, C;
	Nhap(A);
	Nhap(B);
	Nhap(C);
	float p = ChuVi(KhoangCach(A, B), KhoangCach(B, C), KhoangCach(A, C));
	cout << "Chu vi cua tam giac la: "<< p; 
}

void Nhap(Point& p)
{
	cout << "Nhap x: ";
	cin >> p.x;
	cout << "Nhap y: ";
	cin >> p.y;
};
float KhoangCach(Point p, Point q)
{
	return sqrt((p.x - q.x) * (p.x - q.x) + (p.y - q.y) * (p.y - q.y));
};
float ChuVi (float a, float b, float c)
{
	return a + b + c;
}