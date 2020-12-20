#include <string.h>
#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

string num[100000]; 
int cnt[100000]; 
int pos=0;

string xin[100000]; 
int pos1=0; 

bool is_hui(string num){
	if(num[0]=='0'||num.size()<2) return false;
	string str=num;
    reverse(str.begin(),str.end());
    if(str==num){return true;}
    else return false;
}

bool cmp(string _,string __){
	if(_.size()<__.size()){return true;}
	if(_.size()==__.size()&&_<__){return true;}
	else return false;
} 

int main(){
	char a[1000000];
	memset(a,0,sizeof(a)); 

	int size=0;
	while(scanf("%c",&a[size++])!=EOF);
	string str=a;

	for(int i=0;i<str.size();i++){
		 
		if(str[i]>'0'&&str[i]<='9'){
			int right; 
			for(right=i;right<str.size();right++){
				if(str[right]<'0'||str[right]>'9'){
					break;
				}
			}
			right--; 
			
			string temp=str.substr(i,right-i+1);
			
			if(is_hui(temp)){
				int j=0;
				for(j;j<pos;j++){
					if(temp==num[j])break;
				}

				if(j==pos){
					num[pos]=temp;
					cnt[pos]=1;
					pos++;
				}else{
					cnt[j]++;
				}
	
			}
            i=right;
		}
	}
    if(pos==0) {
        cout<<"None";
        return 0;
    }
    int maxx=cnt[0];
    for(int i=0;i<pos;i++){
        maxx=max(maxx,cnt[i]);
    }

    for(int i=0;i<pos;i++){
        if(cnt[i]==maxx){
            xin[pos1++]=num[i];
        }
    }

    sort(xin,xin+pos1,cmp);
    for(int i=0;i<pos1;i++){
        cout<<xin[i]<<" "<<maxx<<endl;
    }
	return 0;
}
