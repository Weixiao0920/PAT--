#include <iostream>
#include <string.h>
using namespace std;
int main() {
	char str[100001];
	cin>>str;
	int numT = 0;
	int numAT = 0;
	int numPAT = 0;
	for(int i = strlen(str) - 1; i >= 0; --i) {	//���ַ���������ǰ���� 
		if(str[i] == 'T')		//����T����¼��T����T���ܸ������������T�� 
			++numT;
		else if(str[i] == 'A')	//����A����¼��A����AT��ϵ��ܸ��������а���֮ǰͳ�Ƶ�A����AT���ܸ����������A�����ȫ��T��ϵĸ�������֮ǰͳ�Ƶ�T���ܸ����� 
			numAT = (numAT + numT) % 1000000007;
		else {	//����P����¼��P����PAT��ϵ��ܸ�����ͬ�� 
			numPAT = (numPAT + numAT) % 1000000007;
		}
	}
	cout<<numPAT;	
	return 0;
}

