#include <iostream>
using namespace std;

void nhapmang1(float a[][100], int& m, int& n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
}
void nhapmang2(float b[][100],int &m, int &n){
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> b[i][j];
		}
	}
}
void xuatmang(float c[][100], int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << c[i][j] << " ";
		}
		cout << endl;
	} 
}
void tinhtong(float a[][100], float b[][100], int m, int n) {
	float c[100][100];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	xuatmang(c, m, n);
}


int main() {
	float a[100][100], b[100][100];
	int m, n;
	cin >> m >> n;
	nhapmang1(a, m, n);

	int m1, n1;
	cin >> m1 >> n1;
	nhapmang2(b, m1, n1);

	tinhtong(a, b, m, n);
}
