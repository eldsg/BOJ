#include<cstdio>
int T[13];
int data[13];

void proc(int n, int r, int q, int s){
	if(r == 0){
		for(int i = 0; i < q; i++) printf("%d ", T[i]);
		puts("");
		return ;
	}
	else if(n < r) return ;
	else{
		T[q-r] = data[q-n+s];
		proc(n-1, r-1, q,s);
		proc(n-1, r, q,s );
	}
}

int main(){
	int t;
	while(1){
		scanf("%d", &t);
		if(!t) break;
		for(int i = 0; i < t; i++) scanf("%d", data+i);
		proc(t, 6, 6, t-6);
	}
}
