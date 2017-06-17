#include<cstdio>

typedef struct p{
	int a, b;
}p;

p k[51];

int chk(int a, int b, int c, int d){
	if(c > a && c < b) return true;
	else if(
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d%d", &k[i].a, &k[i].b);
		if(k[i].a > k[i].b) swap(k[i].a, k[i].b);
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i==j) continue;

		}
	}
}
