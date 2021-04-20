//继承中同名静态成员处理方式
#include <iostream>
using namespace std;

class Base{
	public:
		static void func(){
			cout<<"Base-static void func()调用"<<endl;
		}

		static void func(int a){
			cout<<"Base-static void func(int a)调用"<<endl;
		}
		static int m_A;//静态成员属性特点：编译阶段分配内存；所有对象共享同一份数据；类内声明，类外要初始化
};

int Base::m_A=100;//静态成员属性特点之一：类内声明，类外要初始化(注意作用域)
class Son:public Base{
	public:
		static void func(){
			cout<<"Son-static void func()调用"<<endl;
		}
		static int m_A;
};
int Son::m_A=200;

//同名静态成员属性
void test01(){
	//方法一：通过对象访问
	cout<<"通过对象访问"<<endl;
	Son s;
	cout<<"Son下m_A="<<s.m_A<<endl;
	cout<<"Base下m_A="<<s.Base::m_A<<endl;//作用域
	
	//方法二：通过类名访问!!!!!!!!!!!!!!
	cout<<"通过类名访问"<<endl;
	cout<<"Son下m_A="<<Son::m_A<<endl;
	cout<<"Base下m_A="<<Son::Base::m_A<<endl;//第一个::代表通过类名访问,第二个::代表访问父类作用下
	cout<<"Base下m_A="<<Base::m_A<<endl;//也可以这样
}

//同名静态成员函数
void test02(){
	//方法一：通过对象访问
	cout<<"通过对象访问"<<endl;
	Son s;
	s.func();//调用Son
	s.Base::func();//调用Base
	//方法二：通过类名访问!!!!!!!!!!!!!!
	cout<<"通过类名访问"<<endl;
	Son::func();
	Son::Base::func();
	Son::Base::func(100);
}

int main(){
	test01();
	test02();
	return 0;
}