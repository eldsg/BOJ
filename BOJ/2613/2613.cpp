#include <bits/stdc++.h>

int p[301];
int n, m, ans;

int proc(int ma){
	int s = 0, c = 1, i;
	for(i = 0; i < n-1; i++){
		if(p[i] > ma) return 2;
		s += p[i];
		if(s > ma){
			c++;
			s = p[i];
		}
	}
	if(s + p[i] > ma) c++;
	if(c <= m) return 1;
	return 2;
}

void bs(){
	int l = 0, r = n*100, mid;
	ans = r;
	while(l <= r){
		mid = (l+r)/2;
		int kk = proc(mid);
		if(kk == 1){
			r = mid-1;
			if(ans > mid) ans = mid;
		}
		else if(kk == 2) l = mid+1;
	}
}

int main(){
	scanf("%d%d", &n, &m);
	for(int i = 0; i < n; i++) scanf("%d", &p[i]);
	bs();
	printf("%d\n", ans);
	if(n == m){
		for(int i = 0; i < n; i++) printf("1 ");
	}
	else{
		int sum = 0, c = 0;
		for(int i = 0; i < n; i++){
			sum += p[i];
			if(sum > ans){
				printf("%d ", c);
				c = 0;
				sum = p[i];
			}		
			c++;
		}
		printf("%d\n", c);
	}
}