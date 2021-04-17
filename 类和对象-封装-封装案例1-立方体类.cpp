/*��Ͷ���-��װ-��װ����1-��������
����������ࣻ
��������������������
�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ���ȣ�*/

#include <iostream>
#include <string>
using namespace std;
//����һ�����������
class Cube {
public:
	//��Ϊ
	//���û�ȡ�����
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
	//��ȡ����������
	int calculateS() {
		return 2 * (m_L * m_W + m_L * m_H + m_W * m_H);
	}
	//��ȡ����������
	int calculateV() {
		return m_L * m_H * m_W;
	}
	//���ó�Ա�����ж������������Ƿ����
	bool isSameByClass(Cube &c) {
		if (m_H == c.getH() && m_W == c.getW() && m_L == c.getL())//���ڵ�m_H�ȵȿ���ֱ�ӷ��ʣ�����ֻ�ô�����һ������
			return true;
		return false;
	}
private:
	//����
	int m_L;
	int m_W;
	int m_H;
};

//����ȫ�ֺ����ж������������Ƿ����
bool isSame(Cube& c1, Cube& c2) {//����&����Ϊ��ԭʼ���ݣ�������������������
	if (c1.getH() == c2.getH() && c1.getW() == c2.getW() && c1.getL() == c2.getL())
		return true;
	else
		return false;
}

int main() {
	//����һ��������Ķ���
	Cube c1;
	c1.setW(10);
	c1.setH(10);
	c1.setL(10);
	cout << "c1���Ϊ" << c1.calculateS() << endl;
	cout << "c1���Ϊ" << c1.calculateV() << endl;
	Cube c2;
	//�����ڶ���������
	c2.setW(10);
	c2.setH(10);
	c2.setL(10);
	cout << "c2���Ϊ" << c2.calculateS() << endl;
	cout << "c2���Ϊ" << c2.calculateV() << endl;
	//ȫ�ֺ����ж�
	bool ret = isSame(c1, c2);
	if (ret) {
		cout << "ȫ�ֺ�����c1��c2���" << endl;
	}
	else {
		cout << "ȫ�ֺ����������" << endl;
	}
	//��Ա�����ж�
	ret = c1.isSameByClass(c2);
	bool res = isSame(c1, c2);
	if (res) {
		cout << "��Ա������c1��c2���" << endl;
	}
	else {
		cout << "��Ա�����������" << endl;
	}
	return 0;
}