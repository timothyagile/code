#include <iostream>
using namespace std;

void Nhap(int a[], int&);
void Xuat(int a[], int);
int Tong(int a[], int);
bool KiemTraNT(int);
int Max(int a[], int k);

int main()
{
    int a[100];
    int k;
    Nhap(a, k);  
    Xuat(a, k);
    cout << "Tong cac so nguyen to la: " << Tong(a, k) << endl;
    cout <<"Gia tri lon nhat la: "<< Max (a, k) << endl;
    
    return 0;
}

//Hàm nh?p các giá tr? vào m?ng
void Nhap(int a[], int& k)
{
    cout << "Nhap k: ";
    cin >> k;
    for (int i = 0; i < k; i++)
        cin >> a[i];
}

//hàm xu?t các giá tr? trong m?ng
void Xuat(int a[], int k)
{
    for (int i = 0; i < k; i++)
        cout << a[i] << " ";
}


//Hàm ki?m tra và tính t?ng các s? nguyên t?
bool KiemTraNT(int a)
{
    bool flag = false;
    int dem = 0;
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
            dem = dem + 1;
    }
    if (dem == 2)
        flag = true;
    return flag;
}

int Tong(int a[], int k)
{
    int s = 0;
    for (int i = 0; i < k; i++)
    {
        if (KiemTraNT(a[i]) == 1)
            s = s + a[i];
    }
    return s;
}

//Hàm tìm giá tr? l?n nh?t trong m?ng

int Max(int a[], int k)
{
    int max = a[0];
    for (int i = 0; i < k; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

