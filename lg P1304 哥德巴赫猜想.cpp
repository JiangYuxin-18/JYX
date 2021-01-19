#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int ODD_PRIME(int n, int m);

int main()
{
	int x, y;
	int n;	
	int j = 0, i = 0;
	int N;
	cin>>N;
	for(int i = 4; i <= N; i+=2){
		for(j=2;j<i;j++){
		x = j;
		y = i-j;
		ODD_PRIME(x, y);
		int res = ODD_PRIME(x, y);
		if(res == 1){
		cout<<i<<"="<<x<<"+"<<y<<endl;
		break;
		}
		else
			continue;
		}
	}
}

int ODD_PRIME(int n, int m)
{
	int i, j;
	int k, h;
	k = sqrt(n);
	h = sqrt(m);
	for (i = 2; i <= k; i++) 
	{
		if (n % i == 0)
			break;
	}
	for (j = 2; j <= h; j++) 
	{
		if (m % j == 0)
			break;
	}
	if (i > k && j > h)
		return 1;
	else 
		return 0;
}