#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double N;
    char c;
    cin>>N>>c;
    int hangshu=floor(N/2+0.5);//���������ʵ������������50%����������ȡ����
    for(int i=0;i<N;i++)  ////�����һ����ĸ
    cout<<c;
    cout<<endl;
    for(int i=0;i<hangshu-2;i++)////����ڶ��������ڶ���
    {
        cout<<c;
        for(int j=0;j<N-2;j++)
        cout<<" ";//ÿ��N-2���ո�
        cout<<c<<endl;//ÿ�л���
    }
    for(int i=0;i<N;i++)      //������һ��
    cout<<c;
    return 0;
} 

