#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num[10000];
        char c;
        int size=0;
        for(int j=0;;j++){
            scanf("%d%c",&num[j],&c); 
            size++;
            if(c=='\n') break;
        }
        sort(num,num+size);
        for(int j=0;j<size;j++){
            if(num[j]%2>0)
            printf("%d ",num[j]);
        }
        for(int j=0;j<size;j++){
            if(num[j]%2==0)
            printf("%d ",num[j]);
        }
        printf("\n");
    }
}
