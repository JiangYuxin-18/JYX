//多继承语法
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

//子类继承Base1和Base2
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
	cout<<"sizeof Son="<<sizeof(s)<<endl;//运行结果是16（子类和两个父类都在里面）
	//当父类中出现同名成员时，要加作用域,若不加，则出现二义性
	cout<<"Base1::m_A="<<s.Base1::m_A<<endl;
	cout<<"Base2::m_A="<<s.Base2::m_A<<endl;
}

int main(){
	test01();
	
	return 0;
}