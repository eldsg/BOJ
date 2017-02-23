#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>
typedef struct s{
	int x,y,z;
}s;

using namespace std;

s score[500001];
bool comp(s a, s b){
	return a.x < b.x;
}

int init(vector<int> &a, vector<int> &st, int n, int s, int e){
	if(s==e) return st[n] = a[s];
	return st[n] = min(init(a, st, 2*n, s, (s+e)/2), init(a, st, 2*n+1, (s+e)/2+1, e));
}
int query(vector<int> &st, int n, int s, int e, int l, int r){
	if(l > e || r < s) return 1e9;
	if(l <= s && e <= r) return st[n];
	return min(query(st, 2*n, s, (s+e)/2, l, r), query(st, 2*n+1, (s+e)/2+1, e, l, r));
}
int update(vector<int> &st, int n, int s, int e, int i, int val){
	if(i < s || i > e) return st[n];
	if(s==e) return st[n] = val;
	return st[n] = min(update(st, 2*n, s, (s+e)/2, i, val), update(st, 2*n+1, (s+e)/2+1, e, i, val));
}


int main(){
	int num;
	scanf("%d", &num);
	int h = (int)ceil(log2(num));
	int st = (1 << (h+1));
	vector<int> seg(st);
	for(int i = 1, j; i<=num; i++) scanf("%d", &j), score[j].x = i;
	for(int i = 1, j; i<=num; i++) scanf("%d", &j), score[j].y = i;
	for(int i = 1, j; i<=num; i++) scanf("%d", &j), score[j].z = i;
	sort(score+1, score+num+1, comp);
	for(int i = 1; i<=num; i++) update(seg, 1, 1, num, i, 1e9);
	int ret = 0;
	for(int i = 1; i<=num; i++){
		int b = query(seg, 1, 1, num, 1, score[i].y);
		if(b > score[i].z) ret++;
		update(seg, 1, 1, num, score[i].y, score[i].z);
	}
	printf("%d\n", ret);
//	for(int i = 1; i<=num; i++) printf("%d %d %d\n", score[i].x, score[i].y, score[i].z);
}
