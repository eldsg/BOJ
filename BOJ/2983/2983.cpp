#include <bits/stdc++.h>

using namespace std;

struct p{
	int x, y;
	int d1, d2;
	int next[4];
} a[100001];

int s[100001];

bool cmp1(int i, int j){
	if(a[i].d1 != a[j].d1) return a[i].d1 < a[j].d1;
	return a[i].d2 < a[j].d2;
}
bool cmp2(int i, int j){
	if(a[i].d2 != a[j].d2) return a[i].d2 < a[j].d2;
	return a[i].d1 < a[j].d1;
}

int main(){
	int n, k;
	char str[100001];
	scanf("%d%d", &n, &k);
	scanf(" %s", str);
	for(int i = 0; i < n; i++){
		scanf("%d%d", &a[i].x, &a[i].y);
		a[i].d1 = a[i].x + a[i].y;
		a[i].d2 = a[i].x - a[i].y;
		for(int j = 0; j < 4; j++) a[i].next[j] = -1;
		s[i] = i;
	}
	sort(s, s+n, cmp1);
	for(int i = 0; i < n; i++){
		printf("%d %d\n", a[s[i]].x, a[s[i]].y);
	}
	for(int i = 1; i < n; i++){
		if(a[s[i-1]].d1 == a[s[i]].d1){
			a[s[i-1]].next[1] = s[i];
			a[s[i]].next[2] = s[i-1];
		}
	}
	puts("");
	sort(s, s+n, cmp2);
	for(int i = 0; i < n; i++){
		printf("%d %d\n", a[s[i]].x, a[s[i]].y);
	}
	for(int i = 1; i < n; i++){
		if(a[s[i-1]].d2 == a[s[i]].d2){
			a[s[i-1]].next[0] = s[i];
			a[s[i]].next[3] = s[i-1];
		}
	}
	int now = 0;
	for(int i = 0; str[i]; i++){
		int next = a[now].next[str[i]-'A'];
		if(next == -1) continue;
		for(int j = 0; j < 4; j++){
			if(a[now].next[j] != -1){
				a[a[now].next[j]].next[3-j] = a[now].next[3-j];
			}
		}
		now = next;
	}
	printf("%d %d\n", a[now].x, a[now].y);
}