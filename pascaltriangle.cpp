#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		int num = 1;
		for (int j = 1; j <= n - i + 1; j++) {
			cout << " ";
		}

		for (int j = 1; j <= i; j++) {
			if (j == 1) {
				cout << j << " ";
			}
			else {
				num = num * (i - j + 1) / (j - 1);
				cout << num << " ";
			}
		}
		cout << endl;
	}
}


