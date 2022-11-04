#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void Nhap(long long &);
void KiemTra(long long);

int main() {
    long long n;
    Nhap(n);
    KiemTra(n);
    return 0;
}
void Nhap(long long &n)
{
    cin >> n;
};
void KiemTra (long long n)
{
        long long dn = 0;
        int dv;
        if (n < 0)
            cout << "False";
        else 
        {
            long long t = n;
            while (t > 0)
            {
                dv = t % 10;
                dn = dn*10 + dv;
                t = t/10;
            }
            cout << dn;
            if (n == dn)
                cout << "True";
            else 
            cout << "False";
        }
};



