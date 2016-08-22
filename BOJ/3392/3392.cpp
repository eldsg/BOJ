#include<cstdio>

bool mapp[30001][30001];

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b, c, d;
		scanf("%d %d %d %d", &a, &b, &c, &d);
		for(int i = a; i<c; i++){
			for(int j =b; j<d; j++){
				mapp[i][j] = true;
			}
		}
	}
	int ret = 0;
	for(int i =0; i<30000; i++){
		for(int j = 0; j<30000; j++){
			if(mapp[i][j]) ret++;
		}
	}
	printf("%d\n", ret);
}
