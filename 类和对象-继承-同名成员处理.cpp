//继承中同名成员函数的继承方式
#include <iostream>
using namespace std;

class Base{
	public:
		Base(){
			m_A=100;
		}
	void func(){
		cout<<"Base-func（）调用"<<endl;
	}
	void func(int a){      //函数的重载，同名函数但是参数的个数不同
		cout<<"Base-func（int a）调用"<<endl;
	}
	int m_A;
};

class Son:public Base{
	public:
		Son(){
			m_A=200;
		}
	void func(){
		cout<<"Son-func（）调用"<<endl;
	}
	
	int m_A;//同名成员函数
};

//同名成员属性处理
void test01(){
	Son s;
	cout<<"m_A="<<s.m_A<<endl;//200?100?,但结果为200
	//如果通过子类对象访问到父类中的同名成员，需要加作用域
	cout<<"m_A="<<s.Base::m_A<<endl;//结果为100
}

//同名成员函数处理
void test02(){
	Son s;
	s.func();//直接调用的话，调用的是子类中的同名函数
	s.Base::func();//调用的是父类中的同名函数
	//如果子类中出现了和父类同名的成员函数，则子类的同名函数会隐藏掉父类中所有同名成员函数
	//例如s.func(100);->错误，应该如下(加作用域)：
	s.Base::func(100);
}

int main(){
	test01();
	test02();
	return 0;
}
/*小结：
 若父类子类中有相同的成员函数名：
 调用子类成员函数可以直接调用。
 调用父类成员函数必须加作用域。
 若父类中有两个相同的成员函数名但是参数个数不同时，
 是函数的重载，但是二者都必须加作用域。*/
 








