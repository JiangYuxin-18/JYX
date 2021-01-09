////【1】





























































































//#include <stdio.h>
//int sum(int a, int b);//函数原型
//
//int main(){
//	int x = 0;
//	x = sum(1, 2);
//	printf("the value is %d", x);
//	return 0;
//}
//
//int sum(int a, int b){
//	int c = 0;
//	c = a + b;
//	return c;
//}
//
//
//
//
//
//#include <stdio.h>
//
//int main(){
//
//	int i, j;
//	int y = 1, result = 0;
//	
//	for(j = 0; j < 9; j++)
//	{
//		int x = 1;            //x每次循环完后要清零
//	    for(i = 0; i < 9; i++)
//		{
//		    result = x * y;
//		    printf("%-3d", result);
//		    x++;
//		}
//		
//		printf("\n");
//		y++;
//	}
//	return 0;
//}
//
//
//
//
//
//
//#include <stdio.h>
//int main()
//{
//	int a[100] = {0};
//	printf("%d\n",a[10]);
//	int b[100] = {1,2,3};
//	printf("%d\n",b[2]);
//	printf("%d\n",b[10]);
//	return 0;
//}
//
//
//
//
//
////【2】
////打印学号 打印出来为
//#include <stdio.h>
//#include <string.h>
//
//int f(char myarray[100], char another_array[100]);//函数原型
//
//int main()
//{
//	char xuehao[100] = "2020141460056";//初始化
//	char b[100] = "abc";//初始化
//	puts(b);//puts自带换行，printf不会(需要自己写\n)打印abc
//	f(b, xuehao);//打印abc 2020141460056
//	f(b, "2020141460056");//此时b已被修改为学号（指针）,所以会打印两遍学号
//	puts(b);//b已在自己定义的函数中被修改，故打印学号2020141460056
//	return 0;
//
//}
//
//int f(char myarray[100], char another_array[100])
//{
//	printf("%s\n", myarray);//打印第一个
//	strcpy(myarray, another_array);//将another_array复制到myarray中去
//	printf("%s\n", myarray);//虽然打印的是myarray，但此时myarray已被重新赋值
//	return 0;
//}
//
//
//
//
//
//
//
////c++的string
//str="wertyuio";
//str[5]='a';//错的，str不可修改，但可以整体替代，例如str=“ghj”；(不确定。。。好像也可以改)
//str.size();//（长度）
//str.substr(0,5);//子串（起始位置，截取长度）
////三种传参方式
//#include <iostream>
//using namespace std;
//
//string str;
//
//void f3(int a){           //拷贝
//	a=10000;
//}
//
//void f(int &a){           //传地址
//	a=1000;
//}
//
//void f2(int *a){          //传地址
//	*a=100;
//}
//
//int main(){
//	int a=5;
//	f(a);
//	cout<<a<<endl;
//	f2(&a);
//	cout<<a<<endl;
//	f3(a);
//	cout<<a<<endl;
//	return 0;
//}
//
//
//
//
////寻找文章中重复的单词及数量
//#include <iostream>
//#include <string>
//#include <string.h>
//using namespace std;
//
//string word [1000];//存储单词
//int cnt[1000];//计算同一单词出现的次数
//int pos;//不同单词的数量
//
//int main()
//{
//    string str;
//    getline(cin,str);
//
//    for(int i=0;i<str.size();i++){
//        if(str[i]>='A'&&str[i]<='Z'){
//            str[i]+=32;
//        }
//        if(str[i]>='a'&&str[i]<='z'){
//
//            int right;
//            for(right=i;right<str.size();right++){
//                if(str[right]>'z'||str[right]<'A'||str[right]>'Z'&&str[right]<'a'){
//					break;
//				}
//            }
//			right--;
//
//            string temp=str.substr(i,right-i+1);
//            i=right;
//
//            int j=0;
//            for(j;j<pos;j++){
//                if(temp==word[j]){
//                    cnt[j]++;
//                    break;
//                }
//            }
//            if(j==pos){       //扫遍所有的单词还没有发现和原先重合，于是pos＋1
//                word[pos]=temp;
//                cnt[pos]=1;
//                pos++;
//            }
//        }
//		
//    }
//    
//    for(int i=0;i<pos;i++){
//        cout<<word[i]<<" "<<cnt[i]<<endl;
//    }
//    return 0;
//}
//
//
//
//
//
////<algorithm>头文件的常用方法
//#include <iostream>
//#include <algorithm>   //此函数的用法
//using namespace std;
//
//bool cmp(string a,string b){
//    if(a.size()<b.size())return true;
//    else if(a.size()==b.size()&&a<b) return true;
//    else return false;
//}
//
//bool cmp1(int x,int y){
//    return x>y;
//}
//
//int main(){
//    int a=max(5,6);
//    cout<<a<<endl;
//    int b=min(1,8);
//    cout<<b<<endl;
//
//    int c[5]={2,5,1,3,4};
//    sort(c,c+5,cmp1);
//    for(int i=0;i<5;i++){
//        cout<<c[i]<<" ";
//    }
//    cout<<endl;
//    string str[3];
//    str[0]="121";
//    str[1]="22";
//    str[2]="11";
//    sort(str,str+3,cmp);
//    for(int i=0;i<3;i++){
//        cout<<str[i]<<endl;
//    }
//    return 0;
//}
//
////成绩排序（结构体）
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//struct student{
//    string name;
//    int math;
//    int score;
//}a[5];  //等效于student a[5];(一般写在主函数里面),也可以再写一个a[5],b[5];
//
//bool cmp(student _,student __){
//    if(_.score>__.score) return 1;
//    else if(_.score==__.score&&_.math>__.math) return 1;
//    else if(_.score==__.score&&_.math==__.math&&_.name<__.name) return 1;
//    else return 0;
//}
//
//int main()
//{
//
//    for(int i=0; i<5; i++){
//        cin>>a[i].name>>a[i].math>>a[i].score;   //输入是变量.结构体中的小部分
//    }
//
//    sort(a,a+5,cmp);                             //排序区间是左闭右开，把排序方式的函数传进去
//    for(int i=0; i<5; i++){
//
//        cout<<a[i].name<<" "<<a[i].math<<" "<<a[i].score<<endl;
//    }
//    return 0;
//}
//
//
//
//
////冒泡排序
//#include <stdio.h>
//int main(void){
//	int N,i=0,j;
//	printf("Num:");
//	scanf("%d",&N);
//	int a[N];
//	while(i<N){
//		scanf("%d",&a[i]);
//		i++;
//	}//输入的控制 
//	for(j=0;j<N;j++){//从第一个开始比较 
//		for(i=j;i<N;i++){//第一次不会满足a[j]>a[i},因此进入i+1，再进行比较 
//			if(a[j]>a[i]){//这个是把第一个（之后是第二个......）和后面的每一个进行比较再排序 
//			int t=a[i];
//			a[i]=a[j];
//			a[j]=t;
//			}
//		}
//	}
//	for(j=0;j<N;j++)
//	printf("%d ",a[j]);
//	return 0;//检验是否按照顺序排列 
//}
//
//
//
//
//
//
////截取字符串！！！！！！！！！！！！（子串）
//#include <stdio.h>
//#include <algorithm> 
//#include <iostream>
//using namespace std;
//int main()
//{
//	string str;
//	getline(cin, str);//能输空格，不能输回车，不能和其他输入连起来用，若连起来用，则加\n
//	int n;
//	cin>>n;
//	n%=str.size();
//	string temp=str.substr(str.size()-n,n);
//	temp+=str;
//	substr(str.size()-n,n);
//	cout<<temp;
//	return 0;
//}





//var a="abcdefghiklmnopqrstuvwxyz";
//var b=a.substr(3,5);
//var c=a.substring(3,5);
//打印输出的结果是：
//defgh
//de
//注意最后5下标是不会取到的意思是只能截取a字符串的3,4下标
//截取的时候是不会截取到最后一个[3,5）













//
//
//
//
//
//
////链表
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//struct node{
//    int val;
//    node *next;
//};
//
//int main()
//{
//    node *p=NULL;
//    node *last=NULL;
//    node *first=NULL;
//
//    int n=5;
//    while(n--){
//        p=(node*)malloc(sizeof(node));
//        cin>>p->val;
//        p->next=NULL;
//
//        if(first==NULL){
//            first=p;
//        }
//        if(last!=NULL){
//            last->next=p;
//        }
//        last=p;
//    }
//
//    while(first!=NULL){
//        cout<<first->val<<" ";
//        first=first->next;
//    }
//    return 0;
//}
//
//
//
//
//
//
////分解素数的模板
//#include <iostream>
//using namespace std;
//
//bool check(int n){
//
//}
//
//int main(){
//    int T;
//    cin>>T;
//    while(T--){
//        int m,n,cnt=0;
//        cin>>m>>n;
//        for(int i=m;i<=n;i++){
//            if(check(i)){
//                cnt++;
//                cout<<i<<" ";
//            }
//        }
//
//        if(!cnt){
//            cout<<-1;
//        }
//        cout<<endl;
//    }
//    return 0;
//}
////
////
////
//#include <iostream>
//using namespace std;
//
//int a[100];
//
//int FenjieSuYinShu(int num){
//    int cnt=0;
//    while(num>1){
//        for(int i=2;i<=num;i++){
//            if(num%i==0){
//                a[cnt++]=i;
//                num/=i;
//                break;
//            }
//        }
//    }
//
//    return cnt;
//}
//
//int main(){
//    int n;
//    cin>>n;
//    int cnt=FenjieSuYinShu(n);
//    for(int i=0;i<cnt;i++){
//        cout<<a[i];
//        if(i!=cnt-1)cout<<"*";
//    }
//    return 0;
//}
////
////
////
//int a[100];
//
//int FenjieSuYinShu(int num){
//    int cnt=0;
//    while(num>1){
//        for(int i=2;i<=num;i++){
//            if(num%i==0){
//                a[cnt++]=i;
//                num/=i;
//                break;
//            }
//        }
//    }
//
//    return cnt;
//}
//
//
//
//
//
//
//
////取出位数的函数
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





