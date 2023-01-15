#include <iostream>
using namespace std;
int main() {
	float a[100][100], b[100][100];
	int m, n;
	cin >> m >> n;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	int x = n;
	int y = m;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			b[i][j] = a[j][i];
		}
	}
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}