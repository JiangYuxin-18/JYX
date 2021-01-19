#include <iostream>
#include <algorithm>
using namespace std;

struct student{
    string name;
    int Chinese;
    int Math;
    int English;
}a[1000];  

bool cmp(student _,student __){
    if(_.Chinese + _.Math + _.English > __.Chinese + __.Math + __.English) return 1;
    //else if(_.Chinese + _.Math + _.English = __.Chinese + __.Math + __.English) return 1;
    else return 0;
}

int main()
{
	int n = 0;
	cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i].name>>a[i].Chinese>>a[i].Math>>a[i].English;   
    }

    sort(a,a+n,cmp);                             
    cout<<a[0].name<<" "<<a[0].Chinese<<" "<<a[0].Math<<" "<<a[0].English;
    return 0;
}