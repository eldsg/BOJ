#include<cstdio>
#include<queue>
#include<cstring>

using namespace std;

bool p[10000];

void init(){
	for(int i = 2; i <= 100; i++){
		if(!p[i]){
			for(int j = i*i; j <= 10000; j+=i){
				p[j] = true;
			}
		}
	}
}
int first[10] = { 0, 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000 };
int second[10] = { 0, 100, 200, 300, 400, 500, 600, 700, 800, 900};
int third[10] = { 0, 10, 20, 30, 40, 50, 60, 70, 80, 90};
int four[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int getNext(int c, int i, int j){
	int k;
	if(i == 0){
		k = c / 1000;
		c -= k*1000;
		c += first[j];
	}
	if(i == 1){
		k = (c % 1000) / 100;
		c -= k*100;
		c += second[j];
	}
	if(i == 2){
		k = (c % 100) / 10;
		c -= k*10;
		c += third[j];
	}
	if(i == 3){
		k = (c % 10);
		c -= k;
		c += four[j];
	}
	return c;
}
int main(){
	init();
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d %d", &a, &b);
		bool visit[10001];
		queue<int> PRIME;
		memset(visit, false, sizeof(visit));
		PRIME.push(a);
		visit[a] = true;
		int ret = 0;
		bool check = false;
		while(!PRIME.empty()){
			int s = PRIME.size();
			while(s--){
				int current = PRIME.front();
				PRIME.pop();
				if(current == b){
					check = true;
					break;
				}
				for(int i = 0; i < 4; i++){
					for(int j = 0; j < 10; j++){
						int next = getNext(current, i, j);
						if(p[next] || next < 1000 || visit[next]) continue;
						PRIME.push(next);
						visit[next] = true;
					}
				}
			}
			if(check) break;
			ret++;
		}
		if(check) printf("%d\n", ret);
		else puts("Impossible");

	}
}
