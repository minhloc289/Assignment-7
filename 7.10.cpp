#include <iostream>
using namespace std;

void nhapmang1(float a[][100], int& m, int& n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
}
void nhapmang2(float b[][100], int& l, int& k) {
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < k; j++) {
			cin >> b[i][j];
		}
	}
}


int main() {
	float a[100][100], b[100][100], c[100][100];
	int m, n;
	cin >> m >> n;
	nhapmang1(a, m, n);
	int l, k;
	cin >> l >> k;
	nhapmang2(b, l, k);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < k; j++) {
			float s = 0;
			for (int p = 0; p < l; p++) {
				s+= a[i][p] * b[p][j];
			}
			c[i][j] = s;
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < k; j++) {
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
}
	