////��1��





























































































//#include <stdio.h>
//int sum(int a, int b);//����ԭ��
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
//		int x = 1;            //xÿ��ѭ�����Ҫ����
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
////��2��
////��ӡѧ�� ��ӡ����Ϊ
//#include <stdio.h>
//#include <string.h>
//
//int f(char myarray[100], char another_array[100]);//����ԭ��
//
//int main()
//{
//	char xuehao[100] = "2020141460056";//��ʼ��
//	char b[100] = "abc";//��ʼ��
//	puts(b);//puts�Դ����У�printf����(��Ҫ�Լ�д\n)��ӡabc
//	f(b, xuehao);//��ӡabc 2020141460056
//	f(b, "2020141460056");//��ʱb�ѱ��޸�Ϊѧ�ţ�ָ�룩,���Ի��ӡ����ѧ��
//	puts(b);//b�����Լ�����ĺ����б��޸ģ��ʴ�ӡѧ��2020141460056
//	return 0;
//
//}
//
//int f(char myarray[100], char another_array[100])
//{
//	printf("%s\n", myarray);//��ӡ��һ��
//	strcpy(myarray, another_array);//��another_array���Ƶ�myarray��ȥ
//	printf("%s\n", myarray);//��Ȼ��ӡ����myarray������ʱmyarray�ѱ����¸�ֵ
//	return 0;
//}
//
//
//
//
//
//
//
////c++��string
//str="wertyuio";
//str[5]='a';//��ģ�str�����޸ģ��������������������str=��ghj����(��ȷ������������Ҳ���Ը�)
//str.size();//�����ȣ�
//str.substr(0,5);//�Ӵ�����ʼλ�ã���ȡ���ȣ�
////���ִ��η�ʽ
//#include <iostream>
//using namespace std;
//
//string str;
//
//void f3(int a){           //����
//	a=10000;
//}
//
//void f(int &a){           //����ַ
//	a=1000;
//}
//
//void f2(int *a){          //����ַ
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
////Ѱ���������ظ��ĵ��ʼ�����
//#include <iostream>
//#include <string>
//#include <string.h>
//using namespace std;
//
//string word [1000];//�洢����
//int cnt[1000];//����ͬһ���ʳ��ֵĴ���
//int pos;//��ͬ���ʵ�����
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
//            if(j==pos){       //ɨ�����еĵ��ʻ�û�з��ֺ�ԭ���غϣ�����pos��1
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
////<algorithm>ͷ�ļ��ĳ��÷���
//#include <iostream>
//#include <algorithm>   //�˺������÷�
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
////�ɼ����򣨽ṹ�壩
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//struct student{
//    string name;
//    int math;
//    int score;
//}a[5];  //��Ч��student a[5];(һ��д������������),Ҳ������дһ��a[5],b[5];
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
//        cin>>a[i].name>>a[i].math>>a[i].score;   //�����Ǳ���.�ṹ���е�С����
//    }
//
//    sort(a,a+5,cmp);                             //��������������ҿ���������ʽ�ĺ�������ȥ
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
////ð������
//#include <stdio.h>
//int main(void){
//	int N,i=0,j;
//	printf("Num:");
//	scanf("%d",&N);
//	int a[N];
//	while(i<N){
//		scanf("%d",&a[i]);
//		i++;
//	}//����Ŀ��� 
//	for(j=0;j<N;j++){//�ӵ�һ����ʼ�Ƚ� 
//		for(i=j;i<N;i++){//��һ�β�������a[j]>a[i},��˽���i+1���ٽ��бȽ� 
//			if(a[j]>a[i]){//����ǰѵ�һ����֮���ǵڶ���......���ͺ����ÿһ�����бȽ������� 
//			int t=a[i];
//			a[i]=a[j];
//			a[j]=t;
//			}
//		}
//	}
//	for(j=0;j<N;j++)
//	printf("%d ",a[j]);
//	return 0;//�����Ƿ���˳������ 
//}
//
//
//
//
//
//
////��ȡ�ַ������������������������������Ӵ���
//#include <stdio.h>
//#include <algorithm> 
//#include <iostream>
//using namespace std;
//int main()
//{
//	string str;
//	getline(cin, str);//����ո񣬲�����س������ܺ����������������ã����������ã����\n
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
//��ӡ����Ľ���ǣ�
//defgh
//de
//ע�����5�±��ǲ���ȡ������˼��ֻ�ܽ�ȡa�ַ�����3,4�±�
//��ȡ��ʱ���ǲ����ȡ�����һ��[3,5��













//
//
//
//
//
//
////����
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
////�ֽ�������ģ��
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
////ȡ��λ���ĺ���
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





