#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
bool cmp(int x, int y);

int main() {
	int n = 0;
	cin >> n;
	float res = 0;
	float sum = 0;
	int a[1000];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n, cmp);
	for (int i = 1; i < n - 1; i++) {
		sum += a[i];
	}
	res = sum / (n - 2);
	cout << fixed << setprecision(2) << res << endl;
	return 0;
}

bool cmp(int x, int y) {
	return x > y;
}