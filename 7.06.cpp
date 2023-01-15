#include <iostream>
using namespace std;

void nhapmang(float a[100][100], int& m, int& n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
}

bool kiemtra(float a[100][100], int n) {
	if (n == 1) {
		return true;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) {
				continue;
			}
			else if (a[i][j] != 0 || a[j][i] != 0)
				return false;
		}
	}
	return true;
}
int main() {
	float a[100][100];
	int m, n;
	cin >> m >> n;
	nhapmang(a, m, n);
	if (kiemtra(a, n) == true) {
		cout << "Yes";
	}
	else cout << "No";
}