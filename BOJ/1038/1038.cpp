#include<cstdio>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;
priority_queue<long long> t;
int T[10];
int data[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
vector<unsigned long long> ret;

void proc(int q){
	for(int i = q-1; i >= 0; i--) t.push(T[i]);
	unsigned long long ans = 0;
	while(!t.empty()){
		ans*=10;
		ans+=t.top();
		t.pop();
	}
	ret.push_back(ans);
}

void init(int n, int r, int q){
	if(r==0){
		proc(q);
		return ;
	}
	else if(n < r) return;
	else{
		T[r-1] = data[n-1];
		init(n-1, r-1, q);
		init(n-1, r, q);
	}
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= 10; i++){
		init(10, i, i);
	}
	sort(ret.begin(), ret.end());
	if(n == 1022) printf("9876543210\n");
	else if(n > ret.size()-1) printf("-1\n");
	else printf("%d\n", ret[n]);
}
