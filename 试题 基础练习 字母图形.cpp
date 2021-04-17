#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int n;
	int m;
	cin >> n;
	cin >> m;
	string a={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	for (int i = 1; i < m-1; i++) {
		reverse(a.begin(),a.end());
		cout << a.substr(26-i,i);
		reverse(a.begin(),a.end());
		cout << a.substr(1,m-i) << endl;
	}
	return 0;
}
