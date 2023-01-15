#include <iostream>
using namespace std;
void nhapmang(float a[100][100], int& m, int& n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
}
float tong(float a[][100], int n) {
	float sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i][i];
	}
	return sum;
}
int main() {
	float a[100][100];
	int m, n;
	cin >> m >> n;
	nhapmang(a, m, n);
	float res = tong(a, n);
	cout << res;
	return 0;
}