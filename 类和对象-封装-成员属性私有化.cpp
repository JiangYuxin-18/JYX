//类和对象-封装-成员属性私有化

#include <iostream>
#include <string>
using namespace std;

class Person {
public:
	//设置
	void setName(string name) {
		m_Name = name;
	}
	//获取
	string getName() {
		return m_Name;
	}
	//获取（可读可写）
	int getm_Age() {
		//m_Age = 0;   -> 如果只能获取，则必须初始化
		return m_Age;
	}
	void setAge(int age) {
		if (age < 0 || age>120) {
			m_Age = 0;
			cout << "你这个老妖精" << endl;
			return ;//直接return掉
		}
		m_Age = age;
	}
	//设置（只写）
	void setLover(string lover) {
		m_Lover = lover;
	}
private:
	string m_Name;    //read&write
	int m_Age;        //only read
	string m_Lover;
};

int main() {
	Person p;
	p.setName("张三");//设置
	cout << "the name is" << p.getName() << endl;//获取
	p.setAge(18);
	cout << "the age is" << p.getm_Age() << endl;
	p.setLover("鸡航");//设置情人为鸡航
	//cout << "the lover is" << p.setLover;不能访问，也不能get，
	return 0;
}