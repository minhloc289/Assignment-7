#include <iostream>
using namespace std;
#define MAX 16

void Nhapmang(int a[][MAX], int& n);
void Xuatmang(int a[][MAX], int n);
int fibo(int n) {
	if (n == 1 || n == 2)
		return 1;
	return fibo(n - 1) + fibo(n - 2);
}

void Nhapmang(int a[][MAX], int& n) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			a[i][j] = fibo(i + j + 1);
		}
	}
}

void Xuatmang(int a[][MAX], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
int main()
{
	int n, a[MAX][MAX];
	Nhapmang(a, n);
	Xuatmang(a, n);

	return 0;
}