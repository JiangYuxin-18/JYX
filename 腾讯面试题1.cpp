#include <iostream>
using namespace std;


void test(int n){
    int row=0;
    int col=0;
    int a[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=0;
        }
    }
    int num=1;
    int flag=0;
    int d=1;
    while(num<=(n+1)*n/2){
        if(a[row][col]==0&&col<n&&row<n){
        	a[row][col]=num;
        	num++;
		} 
        else{
        	flag++;
        	if(flag==1) row--;
        	else if(flag==2){
        		col--;
        		row++;
			}
			else {
				flag=0;	
				col++;
			}
		}
		if(flag==0){
			row++;
		}else if(flag==1){
			row--;
			col++;
		}else{
			col--;
		}
		
        
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++)
            printf("\t%d",a[j][i]);
        cout<<endl;
    }
    
        
	}

int main(){
    int n;
    cin>>n;
    test(n);
}


