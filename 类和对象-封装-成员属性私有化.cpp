//��Ͷ���-��װ-��Ա����˽�л�

#include <iostream>
#include <string>
using namespace std;

class Person {
public:
	//����
	void setName(string name) {
		m_Name = name;
	}
	//��ȡ
	string getName() {
		return m_Name;
	}
	//��ȡ���ɶ���д��
	int getm_Age() {
		//m_Age = 0;   -> ���ֻ�ܻ�ȡ��������ʼ��
		return m_Age;
	}
	void setAge(int age) {
		if (age < 0 || age>120) {
			m_Age = 0;
			cout << "�����������" << endl;
			return ;//ֱ��return��
		}
		m_Age = age;
	}
	//���ã�ֻд��
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
	p.setName("����");//����
	cout << "the name is" << p.getName() << endl;//��ȡ
	p.setAge(18);
	cout << "the age is" << p.getm_Age() << endl;
	p.setLover("����");//��������Ϊ����
	//cout << "the lover is" << p.setLover;���ܷ��ʣ�Ҳ����get��
	return 0;
}