#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<vector>
#include<cstring>

#define MAX_N 33333
using namespace std;

bool s[MAX_N];
int p_num[MAX_N];
long long ret = 0;
long long ret2 = 0;
int p_n = 0;
long long T[32];
vector<long long> data;
long long a, b, c;
void init(){
	for(int i = 2; i <= MAX_N; i++){
		if(!s[i]){
			for(int j = i+i; j <= MAX_N; j+=i){
				s[j] = true;
			}
		}
	}
	for(int i = 2; i <= MAX_N; i++){
		if(!s[i]) p_num[p_n++] = i;
	}
}
void getp(long long num){
	for(int i = 0; i < p_n; i++){
		if(!(num%p_num[i])){
			data.push_back(p_num[i]);
			while(num%p_num[i] == 0) num/=p_num[i];
		}
	}
	if(num!=1) data.push_back(num);
}

void proc(int n, int r, int q){
	if(r == 0){
		long long aa = 1;
		for(int i = q-1; i>=0; i--) aa*=T[i];
		if(q&1) {
			ret += b/aa;
			ret2 += (a-1)/aa;
		}
		else {
			ret -= b/aa;
			ret2 -= (a-1)/aa;
		}
		return ;
	}
	else if(n < r) return;
	else{
		T[r-1] = data[n-1];
		proc(n-1, r-1, q);
		proc(n-1, r, q);
	}
}

int main(){
	init();
	int t;
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		scanf("%lld%lld%lld", &a, &b, &c);
		getp(c);
		int size = data.size();
		for(int j = 1; j <= size; j++){
			proc(size, j, j);
		}
		printf("Case #%d: %lld\n", i, b-a+1-ret+ret2);
		data.clear();
		ret = 0;
		ret2 = 0;
	}
}
