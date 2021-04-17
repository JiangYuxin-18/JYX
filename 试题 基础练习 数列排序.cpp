#include <algorithm>
#include <iostream>
using namespace std;

int main() {
	int num[201];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	sort(num, num + n);
	for(int j = 0; j < n;j++){
		cout << num[j]<<" ";
	}
	
	return 0;
}