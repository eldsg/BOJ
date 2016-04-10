#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
int n, m, begin1, end1, mid1;
int baguni[101], temp[101];
int main(){
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++){
		baguni[i] = i + 1;
	}
	for (int i = 0; i < m; i++){
		int k = 0, p= 0;
		scanf("%d %d", &begin1, &end1);
		std::swap(baguni[begin1 - 1], baguni[end1 - 1]);
	}
	for (int i = 0; i < n; i++){
		printf("%d ", baguni[i]);
	}
}