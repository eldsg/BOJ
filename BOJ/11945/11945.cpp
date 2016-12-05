#include<cstdio>

char str[11][11];

int main(){
	int a, b;
	scanf("%d %d\n", &a, &b);
	for(int i = 0; i < a; i++){
		for(int j = 0; j < b; j++){
			scanf("%c", &str[i][j]);
		}
		getchar();
	}
	for(int i =0; i < a; i++){
		for(int j = b-1; j>=0; j--){
			printf("%c", str[i][j]);
		}
		printf("\n");
	}
}
