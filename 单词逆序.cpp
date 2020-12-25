#include <iostream>
#include <string>
#include <stdlib.h>
#include <algorithm>

using namespace std;
int main(){
	string str;
    getline(cin,str);
    for(int i=0;i<str.size();i++){
        if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z'){
            int right;
            for(right=i;right<str.size();right++){
                if(str[right]>'z'||str[right]<'A'||str[right]>'Z'&&str[right]<'a'){
					break;
				}
            }
			right--;
            string temp=str.substr(i,right-i+1);
            i=right;
            reverse(temp.begin(),temp.end());
            cout<<temp;
        }else{
            cout<<str[i];
        }
    }
	return 0;
}
