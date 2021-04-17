/*类和对象-封装-封装案例1-立方体类
设计立方体类；
求出立方体的面积和体积；
分别用全局函数和成员函数判断两个立方体是否相等；*/

#include <iostream>
#include <string>
using namespace std;
//创建一个立方体的类
class Cube {
public:
	//行为
	//设置获取长宽高
	void setL(int l) {
		m_L = l;
	}
	int getL() {
		return m_L;
	}
	void setW(int w) {
		m_W = w;
	}
	int getW() {
		return m_W;
	}
	void setH(int h) {
		m_H = h;
	}
	int getH() {
		return m_H;
	}
	//获取立方体的面积
	int calculateS() {
		return 2 * (m_L * m_W + m_L * m_H + m_W * m_H);
	}
	//获取立方体的体积
	int calculateV() {
		return m_L * m_H * m_W;
	}
	//利用成员函数判断两个立方体是否相等
	bool isSameByClass(Cube &c) {
		if (m_H == c.getH() && m_W == c.getW() && m_L == c.getL())//类内的m_H等等可以直接访问，所以只用传进来一个即可
			return true;
		return false;
	}
private:
	//属性
	int m_L;
	int m_W;
	int m_H;
};

//利用全局函数判断两个立方体是否相等
bool isSame(Cube& c1, Cube& c2) {//加上&，是为了原始数据，若不加则用引用数据
	if (c1.getH() == c2.getH() && c1.getW() == c2.getW() && c1.getL() == c2.getL())
		return true;
	else
		return false;
}

int main() {
	//创建一个立方体的对象
	Cube c1;
	c1.setW(10);
	c1.setH(10);
	c1.setL(10);
	cout << "c1面积为" << c1.calculateS() << endl;
	cout << "c1体积为" << c1.calculateV() << endl;
	Cube c2;
	//创建第二个立方体
	c2.setW(10);
	c2.setH(10);
	c2.setL(10);
	cout << "c2面积为" << c2.calculateS() << endl;
	cout << "c2体积为" << c2.calculateV() << endl;
	//全局函数判断
	bool ret = isSame(c1, c2);
	if (ret) {
		cout << "全局函数：c1与c2相等" << endl;
	}
	else {
		cout << "全局函数：不相等" << endl;
	}
	//成员函数判断
	ret = c1.isSameByClass(c2);
	bool res = isSame(c1, c2);
	if (res) {
		cout << "成员函数：c1与c2相等" << endl;
	}
	else {
		cout << "成员函数：不相等" << endl;
	}
	return 0;
}