#include <iostream>
using namespace std;

int main(){
	int a[100];
	int count = 0;
	for(int i = 0; i < 100; i++){
		cin>>a[i];
		if(a[i] == 0){
			break;
		}
		count++;
	}
	for(int i = count; i > 0; i--){
		cout<<a[i-1]<<" ";
	}
	return 0;
}