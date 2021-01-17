#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[100] = {0};
	int count = 0;
	int cou[100] = {0};
	for(int i = 0; i < n; i++){
		count = 0;
		cin>>a[i];
		for(int j = 0; j < i; j++){   //
			if(a[j] < a[i])           // 循环遍历i之前的
			count++;                  //
		}
		cou[i] = count;
	}
	for(int i = 0; i < n; i++){
		cout<<cou[i]<<" ";    
	}
	return 0;
}