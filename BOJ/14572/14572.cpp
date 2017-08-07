#include <bits/stdc++.h>

using namespace std;

int n, k, d, a, b, t;
int cnt[32];

struct info{
	int algo;
	int power;
};

bool comp(info a, info b){
	return a.power < b.power;
}

int main(){
	info f[100001];
	scanf("%d%d%d", &n, &k, &d);
	for(int i = 0; i < n; i++){
		scanf("%d%d", &a, &b);
		f[i].power = b;
		for(int j = 0; j < a; j++){
			scanf("%d", &t);
			f[i].algo |= (1 << t);
		}
	}
	sort(f, f+n, comp);
	int left = 0;
	int ans = -INT_MAX;
	for(int right = 0; right < n; right++){
		int now = 0;
		while(f[right].power - f[left].power > d ){
			for(int i = 1; i <= k; i++){
				if(f[left].algo & (1 << i)) cnt[i]--;
			}
			left++;	
		}
		for(int i = 1; i <= k; i++){
			if(f[right].algo & (1 << i)) cnt[i]++;
		}
		for(int i = 1; i <= k; i++){
			if(cnt[i] > 0 && cnt[i] < right-left+1) now++;
		}
		//printf("r %d %d\n\n", right, left);
		//printf("c %d %d\n\n", cnt, cnt2);
		//printf("%d\n", right-left+1);
		ans = max(ans, now*(right-left+1));
		//printf("%d\n", ans);
	}
	printf("%d\n", ans);

}