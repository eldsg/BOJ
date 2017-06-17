#include<cstdio>
#include<vector>
#include<cstring>

using namespace std;

bool visit[10001];

int max(int i, int j){
	return i > j ? i : j;
}

int main(){
	setbuf(stdout, NULL);
	int t;
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		memset(visit, false, sizeof(visit));
		int a, b;
		scanf("%d%d", &a, &b);
		vector<int> ret;
		ret.push_back(0);
		int cnt = 0;
		for(int j = 0; j < a; j++){
			int num;
			scanf("%d", &num);
			int size = ret.size();
			for(int k = 0; k < size; k++){
				int sum = ret[k] + num;
				if(sum <= b && !visit[sum]){
					visit[sum] = true;
					ret.push_back(sum);
					cnt = max(sum, cnt);
				}
			}
		}

		printf("Case #%d\n", i);
		printf("%d\n", cnt);
	}
}
