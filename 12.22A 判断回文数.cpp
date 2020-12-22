#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++){
        string str;
        getline(cin,str);//不能和其他输入连起来用，若连起来用，则加\n
        string temp=str;
        reverse(temp.begin(),temp.end());
        if(temp==str) printf("yes\n");
        else printf("no\n");
    }
	return 0;
}