//多态
/*静态多态：函数重载和运算符重载属于静态多态，复用函数名
动态多态：派生类和虚函数实现运行时多态*/
/*静态多态的函数地址早绑定-编译阶段确定函数地址
动态多态的函数地址晚绑定-运行阶段确定函数地址*/
#include <iostream>
using namespace std;

//动物类
class Animal1{
	public:
		void speak(){
			cout<<"动物1在说话"<<endl;
		}
};

class Animal2{
	public:
		//虚函数--->>>动态多态
		virtual void speak(){
			cout<<"动物2在说话"<<endl;
		}
};

class Cat1:public Animal1{
	public:
		void speak(){
			cout<<"猫1在说话"<<endl;
		}
};

class Cat2:public Animal2{
	public:
		void speak(){
			cout<<"猫2在说话"<<endl;
		}
};

class Dog:public Animal2{
	public:
		void speak(){
			cout<<"狗在说话"<<endl;
		}
};

//执行说话的函数-地址早绑定-编译阶段确定函数地址>>动物在说话
void doSpeak(Animal1 &animal1){//父类引用指向子类对象（c++允许父子转换，不需要强制转换）
	animal1.speak();
}

//动态多态满足条件：
//1,有继承关系
//2,子类"重写"父类的虚函数(重写：函数返回值类型，函数名，参数列表都完全相同)，子类的virtual可写可不写

//动态多态的使用
//父类的指针或者引用来指向子类对象


//执行说话的函数-地址晚绑定-运行阶段确定函数地址>>猫在说话>>>>>>要用虚函数
void doSpeak(Animal2 &animal2){//父类引用指向子类对象（c++允许父子转换，不需要强制转换）
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
	test01();//"动物在说话"
	
	return 0;
}