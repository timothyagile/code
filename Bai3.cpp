#include <iostream>
using namespace std;

void inputArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
int main() {
  	int N;
  	int Arr[1000];
  	cin >> N; // Nhap vao so phan tu mang
  	inputArray(Arr, N); // Nhap mang
    int flag = 0;
    for (int i = 0; i < N; i++)
    {
        int dem = 1;
        for (int j = 0; j < N; j++)
        {
            if (Arr[i] == Arr[j])
                dem++;
        }
        if (dem == 2)
        {
            cout << Arr[i] << " ";
            flag = 1;
        }
    }
    if (flag == 0)
        cout << "False";
    return 0;
}

