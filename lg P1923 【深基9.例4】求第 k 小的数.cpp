#include <bits/stdc++.h>
using namespace std;
long long n,k,a[5000010];

int main()
{
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    nth_element(a,a+k,a+n);//ʹ��kС������λ 
    printf("%d",a[k]);//���õ�kС����
}