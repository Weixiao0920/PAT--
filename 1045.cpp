#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int N;
    cin>>N;
    int a[N+5],b[N+5],c[N];
    for(int i=0;i<N;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a,a+N);
    int count=0;
    int temp=0,max=0;
    for(int i=0;i<N;i++){
        if(max<b[i]) max=b[i];    //�����ֵ��������    
        if(a[i]==b[i]&&a[i]==max){//�����������Ԫ�����������ֵ����ȷ������Ԫ 
        c[count++]=a[i];
        }
    }
    cout<<count<<endl;
    if(count==0) cout<<endl;    //�����Ԫ������0�����л���Ҫ����� 
    for(int i=0;i<count;i++){
            if(i!=0)
            cout<<" ";
            cout<<c[i];
    }
    return 0;
}


