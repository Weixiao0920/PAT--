#include<iostream>
using namespace std;
int main(){   
	int n; string c;
	cin>>c>>n;
	getchar();
 
	int num = 0; 
	while(1){ 
		string t;
		getline(cin,t);  // �� getline , ��cin>>t;������ͨ������
		
		 
		++num;
		if(t == "#"){    // ע����˫���� �� ��
			break;
		}else if(num>n){
			cout<<"Account locked"<<endl;
			break;
		}else if(t==c){
			cout<<"Welcome in"<<endl;
			break;
		}else{
			cout<<"Wrong password: "<<t<<endl;
			if(num==n){      // ����û����Ҳ����ס
				cout<<"Account locked"<<endl;
				break;
			}
		}
	}
	 
	return 0;
}
