#include<cstdio>
#include<vector>

using namespace std;

int main(){
	setbuf(stdout, NULL);
	int t;
	scanf("%d", &t);
	for(int i = 1; i <= t; ++i){
		int size;
		scanf("%d", &size);
		char first, last;
		vector<int> check;
		char str[5001];
		scanf("%s", str);
		first = str[0];
		last = str[size-1];
		int ret = 0;
		for(int j = 1; j < size/2; j++){
			if(str[j] == first){
				check.push_back(j);
			}
		}
		for(int j = 0; j < check.size(); j++){
			if(str[check[j]+1] == last) ret++;
		}
		
		printf("Case #%d\n", i);
		printf("%d\n", ret);

	}
}	
