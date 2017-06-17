#include<cstdio>

bool m[101][101];

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d%d", &a, &b);
		for(int i = a; i < a+10; i++){
			for(int j = b; j < b+10; j++){
				m[i][j] = true;
			}
		}
	}
	int ret = 0;
	for(int i = 1; i<=100; i++){
		for(int j=1; j<=100; j++){
			if(m[i][j]) ret++;
		}
	}
	printf("%d\n", ret);

}
