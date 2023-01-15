#include <iostream>
using namespace std;

void nhapmang(float a[100][100], int& m, int& n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
}

bool kiemtra(float a[100][100], int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] != a[j][i]) {
				return false;
			}
		}
	}
	return true;
}
int main() {
	float a[100][100];
	int m, n;
	cin >> m >> n;
	nhapmang(a, m, n);
	if (kiemtra(a,m, n) == true) {
		cout << "Yes";
	}
	else cout << "No";
}