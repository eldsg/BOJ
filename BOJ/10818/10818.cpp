#include<cstdio>
#include<algorithm>

int num[1000001];

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i <n; i++){
		scanf("%d", &num[i]);
	}
	std::sort(num, num+n);
	printf("%d %d\n", num[0], num[n-1]);
	
}
