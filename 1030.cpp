
# include <iostream>
# include <algorithm>
using namespace std;
const int inf = 1e9;
 
int main(){
	long long N, p;
	scanf("%lld%lld", &N, &p);
	long long v[N], result = 0, tmp = 0;
	for(int i = 0; i < N; i++){
		scanf("%lld", &v[i]);
	}
	sort(v, v+N);
	for(int i = 0; i < N; i++){
		for(int j = i + result; j < N; j++){
			if(v[j] <= v[i] * p){
				tmp = j+1-i;
				if(tmp > result)
					result = tmp;
			}
			else break;
		}
	}
	cout << result << endl;
}
