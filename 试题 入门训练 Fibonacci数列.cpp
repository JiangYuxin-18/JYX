#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	long long a[n];
	a[0] = 0,a[1] = 1;
	for(int i=2;i<=n;i++){
		a[i] = (a[i-2]+a[i-1])%10007;
	}
	cout<<a[n]<<endl;
	return 0;
} 