#include<iostream>
using namespace std;
int main()
{   int N;
    int num,score,max=0;
	int sum[200010]={0};//�ò��Ե㳬ʱ��ԭ�� Ӧ�ñ���Ӧ�Կռ任ʱ�䣬���뽨���������
	cin>>N;
	for(int i=1;i<=N;i++)
	{
		cin>>num>>score;
		sum[num]+=score;
		if(sum[num]>max)
		max=sum[num];
	}
	for(int i=1;i<=N;i++)
	{
		if(sum[i]==max)
		cout<<i<<" "<<sum[i]<<endl;
	}
	
}
