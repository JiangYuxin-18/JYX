//�̳���ͬ����̬��Ա����ʽ
#include <iostream>
using namespace std;

class Base{
	public:
		static void func(){
			cout<<"Base-static void func()����"<<endl;
		}

		static void func(int a){
			cout<<"Base-static void func(int a)����"<<endl;
		}
		static int m_A;//��̬��Ա�����ص㣺����׶η����ڴ棻���ж�����ͬһ�����ݣ���������������Ҫ��ʼ��
};

int Base::m_A=100;//��̬��Ա�����ص�֮һ����������������Ҫ��ʼ��(ע��������)
class Son:public Base{
	public:
		static void func(){
			cout<<"Son-static void func()����"<<endl;
		}
		static int m_A;
};
int Son::m_A=200;

//ͬ����̬��Ա����
void test01(){
	//����һ��ͨ���������
	cout<<"ͨ���������"<<endl;
	Son s;
	cout<<"Son��m_A="<<s.m_A<<endl;
	cout<<"Base��m_A="<<s.Base::m_A<<endl;//������
	
	//��������ͨ����������!!!!!!!!!!!!!!
	cout<<"ͨ����������"<<endl;
	cout<<"Son��m_A="<<Son::m_A<<endl;
	cout<<"Base��m_A="<<Son::Base::m_A<<endl;//��һ��::����ͨ����������,�ڶ���::������ʸ���������
	cout<<"Base��m_A="<<Base::m_A<<endl;//Ҳ��������
}

//ͬ����̬��Ա����
void test02(){
	//����һ��ͨ���������
	cout<<"ͨ���������"<<endl;
	Son s;
	s.func();//����Son
	s.Base::func();//����Base
	//��������ͨ����������!!!!!!!!!!!!!!
	cout<<"ͨ����������"<<endl;
	Son::func();
	Son::Base::func();
	Son::Base::func(100);
}

int main(){
	test01();
	test02();
	return 0;
}