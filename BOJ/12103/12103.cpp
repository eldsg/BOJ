#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<vector>
#include<cmath>

using namespace std;

bool possibleChange[1000001];

int init(vector<int> &a, vector<int> &st, int n, int s, int e){
	if(s==e){
		if(a[s]%2) return st[n] = 1;
		else return st[n] = 0;
	}
	return st[n] = init(a, st, 2*n, s, (s+e)/2)+init(a, st, 2*n+1, (s+e)/2+1, e);
}
int query(vector<int> &st, int n, int s, int e, int l, int r){
	if(l > e || r < s) return 0;
	if(l <= s && e <= r) return st[n];
	return query(st, 2*n, s, (s+e)/2, l, r)+query(st, 2*n+1, (s+e)/2+1, e, l, r);
}
void update(vector<int> &st, int n, int s, int e, int i, int v){
	if(i < s || i > e) return ;
	if(v%2) st[n]+=1;
	else st[n]-=1;
	if(s != e){
		update(st, 2*n, s, (s+e)/2, i, v);
		update(st, 2*n+1, (s+e)/2+1, e, i, v);
	}
}

int main(){
	int n, k;
	scanf("%d%d", &n, &k);
	vector<int> nums(n+1);
	int h = (int)ceil(log2(n));
	int st = (1 << (1+h));
	vector<int> segTree1(st);
	int range = n-k+1;
	for(int i = 0; i < n; i++){
		scanf("%d", &nums[i]);
	}
	init(nums, segTree1, 1, 0, n-1);
	int count = 0;
	for(int i = 0; i < n-k+1; i++){
		int a = query(segTree1, 1, 0, n-1, i, i+k-1);
		if(a%2==0) continue;
		else{
			count++;
			nums[i+k-1]++;
			update(segTree1, 1, 0, n-1, i+k-1, nums[i+k-1]);
			
		}
	}
	printf("%d\n", count);
	for(int i = 0; i < n; i++) printf("%d ", nums[i]);
	printf("\n");
}
