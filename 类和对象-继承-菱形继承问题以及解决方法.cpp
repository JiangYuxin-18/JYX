//���μ̳�
/*����������̳�ͬһ�����࣬����ĳ����ͬʱ�̳�����������*/
//ע�⣺�����ԣ��̳������ݣ�����ʵֻ��һ��
#include <iostream>
using namespace std;

class Animal{
	public:
		int m_Age;
};

//������̳У����Խ�����μ̳е����⣨�ӹؼ���virtual����Animal���Ϊ������ࡱ��
class Sheep:virtual public Animal{
	
};

class Tuo:public virtual Animal{
	
};

class SheepTuo:public Sheep,public Tuo{
	
};

void test01(){
	SheepTuo st;
	//st.m_Age;����ȷ��������
	st.Sheep::m_Age=18;
	st.Tuo::m_Age=28;
	//�����μ̳�ʱ������ӵ����ͬ�����ݣ���Ҫ������������
	cout<<"st.Sheep::m_Age="<<st.Sheep::m_Age<<endl;
	cout<<"st.Tuo::m_Age="<<st.Tuo::m_Age<<endl;
	//���������ֻҪ��һ�ݾͿ��ԣ�����ֻ��һ�����䣩�������μ̳е����������ݣ���ʹ�������
	//��ʱTuo��28�൱���޸���Sheep��18�������ζ����28������ֱ��дΪ��
	cout<<"st.m_Age="<<st.m_Age<<endl;
}

int main(){
	test01();
	return 0;
}