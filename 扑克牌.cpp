/*扑克牌说明：
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

return x%13>y%13;//按牌的点数降序排列

}

int main()

{

srand(time(0));

int i,j;

int poker[52];//存0～51表示的52张牌

int player[4][13];//存4个玩家的牌

for(i=0;i<52;i++)

{

poker[i]=i;

}

//从poker数组中，每次随机取出1张牌，按顺序发给4个玩家

for(i=0;i<52;i++)

{

int idx = rand()%(52-i); //随机取一张牌

player[i%4][i/4]=poker[idx];

//取得牌依次为第1个人第1张，第2个人第1张，第3个人第1张，第4个人第1张

//1个人第2张，2个人第2张，3个人第2张 ………………

poker[idx]=poker[51-i];//取完牌把最后一个牌移到前面

}

for(i=0;i<4;i++)

{

cout<<"玩家"<<i<<"的牌为:";

sort(player[i],player[i]+13,cmp);

for(j=0;j<13;j++)

{

int type=player[i][j]/13;//花色

int point=player[i][j]%13;//点数

cout<<char(type+3)<<setw(2)<<left<<p[point]<<' ';

}

cout<<endl;

}

return 0;

}