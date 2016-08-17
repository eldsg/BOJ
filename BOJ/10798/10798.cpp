#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>

int main(){
	char str[6][16];
	memset(str, 0, sizeof(str));
	int maxx = 0;
	for(int i = 0; i<5; i++){
		scanf("%s", str[i]);
		int size = strlen(str[i]);
		maxx = std::max(size, maxx);		
	}
	for(int i = 0; i<maxx; i++){
		for(int j = 0; j<5; j++){
			if(str[j][i] != 0) printf("%c", str[j][i]);
		}
	}
	printf("\n");
}
