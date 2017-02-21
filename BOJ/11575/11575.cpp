#include<cstdio>
#include<cstring>
#include<cstdlib>

int main(){
	int tc;
	scanf("%d", &tc);
	while(tc--){
		int a, b, size;
		char str[1000001];
		scanf("%d %d %s", &a, &b, str);
		size = strlen(str);
		for(int i = 0; i < size; i++){
			str[i]-='A';
			str[i] = (a*str[i]+b)%26;
			str[i]+='A';
		}
		printf("%s\n", str);
	}
}
