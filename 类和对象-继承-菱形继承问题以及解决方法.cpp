//菱形继承
/*两个派生类继承同一个基类，又有某个类同时继承两个派生类*/
//注意：二义性；继承了两份，但现实只需一份
#include <iostream>
using namespace std;

class Animal{
	public:
		int m_Age;
};

//利用虚继承，可以解决菱形继承的问题（加关键字virtual，则Animal类称为“虚基类”）
class Sheep:virtual public Animal{
	
};

class Tuo:public virtual Animal{
	
};

class SheepTuo:public Sheep,public Tuo{
	
};

void test01(){
	SheepTuo st;
	//st.m_Age;不明确，二义性
	st.Sheep::m_Age=18;
	st.Tuo::m_Age=28;
	//当菱形继承时，两类拥有相同的数据，需要加作用域区分
	cout<<"st.Sheep::m_Age="<<st.Sheep::m_Age<<endl;
	cout<<"st.Tuo::m_Age="<<st.Tuo::m_Age<<endl;
	//但这份数据只要有一份就可以（羊驼只有一个年龄），但菱形继承的数据有两份，故使用虚基类
	//此时Tuo的28相当于修改了Sheep的18，故两次都输出28，可以直接写为：
	cout<<"st.m_Age="<<st.m_Age<<endl;
}

int main(){
	test01();
	return 0;
}