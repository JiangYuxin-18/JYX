/*�˿���˵����
string[] RANKS = {"A","2",.....,"K"};
string[] SUITS = {"c","d","h","s"};   */
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

const int COLOR = 4;
const int MUM = 13;
string RANKS[] = { "A","2","3","4","5","6","7","8","9","10","J","Q","K" };

string SUITS[] = { "c","d","h","s" };

string p[13]={"3","4","5","6","7","8","9","10","J","Q","K","A","2"};

bool cmp(int x,int y)

{

return x%13>y%13;//���Ƶĵ�����������

}

int main()

{

srand(time(0));

int i,j;

int poker[52];//��0��51��ʾ��52����

int player[4][13];//��4����ҵ���

for(i=0;i<52;i++)

{

poker[i]=i;

}

//��poker�����У�ÿ�����ȡ��1���ƣ���˳�򷢸�4�����

for(i=0;i<52;i++)

{

int idx = rand()%(52-i); //���ȡһ����

player[i%4][i/4]=poker[idx];

//ȡ��������Ϊ��1���˵�1�ţ���2���˵�1�ţ���3���˵�1�ţ���4���˵�1��

//1���˵�2�ţ�2���˵�2�ţ�3���˵�2�� ������������

poker[idx]=poker[51-i];//ȡ���ư����һ�����Ƶ�ǰ��

}

for(i=0;i<4;i++)

{

cout<<"���"<<i<<"����Ϊ:";

sort(player[i],player[i]+13,cmp);

for(j=0;j<13;j++)

{

int type=player[i][j]/13;//��ɫ

int point=player[i][j]%13;//����

cout<<char(type+3)<<setw(2)<<left<<p[point]<<' ';

}

cout<<endl;

}

return 0;

}