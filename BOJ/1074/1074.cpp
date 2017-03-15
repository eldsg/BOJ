#include<cstdio>

int ret = 0;
int n, r, c;
void proc(int k, int x, int y){
	if(k==1) return;
	int cnt = (k/2)*(k/2);
	if(r < x && c < y){
		proc(k/2, x-k/4, y-k/4);
	}
	else if(r < x && c >= y){
		ret += cnt;
		proc(k/2, x-k/4, y+k/4);
	}
	else if(r >= x && c < y){
		ret += 2*cnt;
		proc(k/2, x+k/4, y-k/4);
	}
	else{
		ret += 3*cnt;
		proc(k/2, x+k/4, y+k/4);
	}
}

int main(){
	scanf("%d%d%d", &n, &r, &c);
	int k = 1 << n;
	proc(k, k/2, k/2);
	printf("%d\n", ret);
}
