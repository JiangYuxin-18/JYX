//��̬
/*��̬��̬���������غ�������������ھ�̬��̬�����ú�����
��̬��̬����������麯��ʵ������ʱ��̬*/
/*��̬��̬�ĺ�����ַ���-����׶�ȷ��������ַ
��̬��̬�ĺ�����ַ���-���н׶�ȷ��������ַ*/
#include <iostream>
using namespace std;

//������
class Animal1{
	public:
		void speak(){
			cout<<"����1��˵��"<<endl;
		}
};

class Animal2{
	public:
		//�麯��--->>>��̬��̬
		virtual void speak(){
			cout<<"����2��˵��"<<endl;
		}
};

class Cat1:public Animal1{
	public:
		void speak(){
			cout<<"è1��˵��"<<endl;
		}
};

class Cat2:public Animal2{
	public:
		void speak(){
			cout<<"è2��˵��"<<endl;
		}
};

class Dog:public Animal2{
	public:
		void speak(){
			cout<<"����˵��"<<endl;
		}
};

//ִ��˵���ĺ���-��ַ���-����׶�ȷ��������ַ>>������˵��
void doSpeak(Animal1 &animal1){//��������ָ���������c++������ת��������Ҫǿ��ת����
	animal1.speak();
}

//��̬��̬����������
//1,�м̳й�ϵ
//2,����"��д"������麯��(��д����������ֵ���ͣ��������������б���ȫ��ͬ)�������virtual��д�ɲ�д

//��̬��̬��ʹ��
//�����ָ�����������ָ���������


//ִ��˵���ĺ���-��ַ���-���н׶�ȷ��������ַ>>è��˵��>>>>>>Ҫ���麯��
void doSpeak(Animal2 &animal2){//��������ָ���������c++������ת��������Ҫǿ��ת����
	animal2.speak();
}

void test01(){
	Cat1 cat1;
	doSpeak(cat1);
	Cat2 cat2;
	doSpeak(cat2);
	Dog dog;
	doSpeak(dog);
}

int main(){
	test01();//"������˵��"
	
	return 0;
}