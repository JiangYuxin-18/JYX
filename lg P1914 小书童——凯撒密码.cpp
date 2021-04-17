#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	string a;
	string b;
	getchar();
	getline(cin,a);
	for(int i = 0; i < a.length(); i++){
		a[i]=(a[i]+n-'a')%('z'-'a'+1)+'a';
		cout<<a[i];
	}
	return 0;
}