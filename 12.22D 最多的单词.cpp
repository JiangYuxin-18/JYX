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
//    while(getline(cin,str)){
//
//        for(int i=0;i<str.size();i++){
//            if(str[i]>='A'&&str[i]<='Z'){
//                str[i]+=32;
//            }
//            if(str[i]>='a'&&str[i]<='z'){
//
//                int right;
//                for(right=i;right<str.size();right++){
//                    if(str[right]>'z'||str[right]<'A'||str[right]>'Z'&&str[right]<'a'){
//                        break;
//                    }
//                }
//                right--;
//
//                string temp=str.substr(i,right-i+1);
//                i=right;
//
//                int j=0;
//                for(j;j<pos;j++){
//                    if(temp==word[j]){
//                        cnt[j]++;
//                        break;
//                    }
//                }
//                if(j==pos){       //扫遍所有的单词还没有发现和原先重合，于是pos+1
//                    word[pos]=temp;
//                    cnt[pos]=1;
//                    pos++;
//                }
//            }
//            
//        }
//    }
//    for(int i=0;i<pos;i++){
//        cout<<word[i]<<" "<<cnt[i]<<endl;
//    }
//    return 0;
//}

#include <iostream>
#include <string>
#include <string.h>
using namespace std;

string word [1000];//存储单词
int cnt[1000];//计算同一单词出现的次数
int pos;//不同单词的数量

int main()
{
    string str;
    int max=0;
    int maxIndex=0;
    while(getline(cin,str)){

        for(int i=0;i<str.size();i++){
            if(str[i]>='A'&&str[i]<='Z'){
                str[i]+=32;//把大写改成小写
            }
            if(str[i]>='a'&&str[i]<='z'){

                int right;
                for(right=i;right<str.size();right++){
                    if(str[right]>'z'||str[right]<'A'||str[right]>'Z'&&str[right]<'a'){
                        break;
                    }
                }
                right--;

                string temp=str.substr(i,right-i+1);
                i=right;

                int j=0;
                for(j;j<pos;j++){
                    if(temp==word[j]){
                        cnt[j]++;
                        break;
                    }
                }
                if(j==pos){       //扫遍所有的单词还没有发现和原先重合，于是pos+1
                    word[pos]=temp;
                    cnt[pos]=1;
                    pos++;
                }
            }
            
        }
    }
    
    for(int i=0;i<pos;i++){      //输出典序大的那一个

        if(cnt[i]>max){
        	maxIndex=i;
        	max=cnt[i];
		} else if(cnt[i]==max){
			if(word[maxIndex]<word[i]) {
				maxIndex=i;
        		max=cnt[i];
			}
		}
    
    }
	cout<<word[maxIndex]<<" "<<cnt[maxIndex]<<endl;
    return 0;
}

