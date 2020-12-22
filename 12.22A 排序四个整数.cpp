//#include <stdio.h>

//
//int main() {
//
//    int n, i;
//    scanf("%d", &n);  // 有n组数据
//    for (i = 0; i < n; i++) {
//
//        int a, b, c, d;
//        scanf("%d%d%d%d",&a,&b,&c,&d);
//        if(a>b){
//            int temp=a;
//            a=b;
//            b=temp;
//        }
//        if(a>c){
//            int temp=a;
//            a=c;
//            c=temp;
//        }
//        if(a>d){
//            int temp=a;
//            a=d;
//            d=temp;
//        }
//        if(b>c){
//            int temp=b;
//            b=c;
//            c=temp;
//        }
//        if(b>d){
//            int temp=b;
//            b=d;
//            d=temp;
//        }
//        if(c>d){
//            int temp=c;
//            c=d;
//            d=temp;
//        }
//        
//    printf("%d %d %d %d\n",a,b,c,d);
//    }
//    //printf("%d %d %d %d\n",a,b,c,d);
//    return 0;
//}
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		int a[4];
		cin>>a[0]>>a[1]>>a[2]>>a[3];
		sort(a,a+4);
		cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<endl; 
	}
	return 0;
}