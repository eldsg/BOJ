#include<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> res;
int main(){
	int a, b;
	char buf[5];
	scanf("%d %d", &a, &b);
	res.push_back(a);
	while(1){
		char buf[100];
		sprintf(buf, "%d", a);
		int size = strlen(buf);
		int ret = 0, temp = 0;
		for(int i = 0; i<size; i++){
			ret = buf[i]-'0';
			for(int j = 0; j<b-1; j++){
				ret *= (buf[i]-'0');
			}
			temp += ret;
		}
		auto it = find(res.begin(), res.end(), temp);
		if(it != res.end()){
			for(auto i = it; i!= res.end();) res.erase(i);
			break;
		}
		res.push_back(temp);
		a = temp;
	}
	printf("%d\n", res.size());
}
