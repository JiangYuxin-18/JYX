//��̳��﷨
#include <iostream>
using namespace std;

class Base1{
	public:
		Base1(){
			m_A=100;
		}
		int m_A;
};

class Base2{
	public:
		Base2(){
			m_A=200;
		}
		int m_A;
};

//����̳�Base1��Base2
class Son:public Base1,public Base2{
	public:
		Son(){
			int m_C=300;
			int m_D=400;
		}
	int m_C;
	int m_D;
};

void test01(){
	Son s;
	cout<<"sizeof Son="<<sizeof(s)<<endl;//���н����16��������������඼�����棩
	//�������г���ͬ����Աʱ��Ҫ��������,�����ӣ�����ֶ�����
	cout<<"Base1::m_A="<<s.Base1::m_A<<endl;
	cout<<"Base2::m_A="<<s.Base2::m_A<<endl;
}

int main(){
	test01();
	
	return 0;
}