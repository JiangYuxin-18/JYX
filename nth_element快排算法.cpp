#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
    return a > b;
}

int main()
{
	int a[9] = {4,7,6,9,1,8,2,3,5};
	int b[9] = {4,7,6,9,1,8,2,3,5};
	int c[9] = {4,7,6,9,1,8,2,3,5};
	nth_element(a,a+2,a+9);
	//���±�Ϊ2��Ҳ���ǵ�3����������ȷ��λ��
	//Ҳ��������ǵ�3С
	cout <<"��3С�ǣ�"<< a[2] << endl;
	for(int i = 0; i < 9; i++)
    cout << a[i] << " "; puts("");//ע���±��Ǵ�0�_ʼ������
	//��ô���3�󣬾������9-3+1С,����7С
	//Ҳ���ǽ��±�Ϊ6�ĵ�7������������ȷ��λ��
	nth_element(b,b+6,b+9);
	cout <<"��3���ǣ�"<< b[6] << endl;
	for(int i = 0; i < 9; i++)
	cout << b[i] << " "; puts("");//ע���±��Ǵ�0�_ʼ������
	nth_element(c,c+2,c+9,cmp);//��һ�ַ���
	//nth_element(c,c+2,c+9,greater<int>()); //�ڶ��ַ���
	cout <<"��3���ǣ�"<< c[2] << endl;
	for(int i = 0; i < 9; i++)
	cout << c[i] << " "; //ע���±��Ǵ�0�_ʼ������
}