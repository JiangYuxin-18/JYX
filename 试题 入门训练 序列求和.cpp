#include <iostream>
using namespace std;

int main(){
	long long n;
	long long i = 1;
	long long sum = 0;
	
	
	cin >> n;
	
	for(i = 1; i <= n; i++){
		sum += i;
	}
	
	cout << sum;
	
	return 0;
}