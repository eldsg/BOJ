#include<cstdio>
#include<string>
#include<cstring>
#include<map>

using namespace std;

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		map<string, int> res;
		int n, ret = 1;
		scanf("%d", &n);
		for(int i = 0; i < n; i++){
			char str[20], str1[20];
			scanf("%s %s", str, str1);
			string name(str1);
			res[name]++;
		}
		for(auto it = res.begin(); it!=res.end(); it++){
			ret *= (1+it->second);
		}
		printf("%d\n", ret-1);
	}
}