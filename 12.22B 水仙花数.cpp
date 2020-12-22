#include <iostream>
#include <math.h>
using namespace std;

//void getNum(int n){
//    int div=1;
//    while(n/div)div*=10;
//    div/=10;
//
//    while(div){
//        int num=n/div;
//        n-=num*div;
//
//        div/=10;
//    }
//}



bool check(int n){
	int div=100;
	int res=0;
	int last=n;
	
	while(div){
		int num=n/div;
		n-=num*div;
		div/=10;
		res+=pow(num,3);
	}
	
	if(res==last)return true;
	else return false;
}

int main(){
	int T;
    cin>>T;
    while(T--){
        int m,n,cnt=0;
        cin>>m>>n;
        for(int i=m;i<=n;i++){
            if(check(i)){
                cnt++;
                cout<<i<<" ";
            }
        }

        if(!cnt){
            cout<<-1;
        }
        cout<<endl;
    }
    return 0;
}