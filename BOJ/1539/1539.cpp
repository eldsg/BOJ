#include <bits/stdc++.h>
using namespace std;
static inline bool is_number(const int i){
	return !((i & 0Xf0) ^ 0x30);
}

static inline void scan_int(int *const x){
	register int c = getchar_unlocked();
	*x = 0;
	while(is_number(c)){
		*x = ((*x<<1) + (*x<<3) + (c - '0'));
		c = getchar_unlocked();
	}
}
map<int, int> ret;
int n, t;
long long sum = 1;

int main(){
    scan_int(&n);
	int root, depth;
	for(int i = 0; i < n; i++){
        scan_int(&t);
		//scanf("%d" ,&t);
		if(!i) ret[t] = 1;
		else{
			auto it = ret.lower_bound(t);
			if(it == ret.begin()) depth = it->second+1;
			else if(it == ret.end()) depth = (--it)->second+1;
			else{
				depth = it->second;
				depth = max(depth, (--it)->second)+1;
			}
			ret[t] = depth;
			sum += depth;
		}
	}
	printf("%lld\n", sum);
}