#include<stdio.h>
int n, m, begin1, end1, mid1;
int baguni[101], temp[101];
int main(){
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++){
		baguni[i] = i + 1;
	}
	for (int i = 0; i < m; i++){
		int k = 0, p= 0;
		scanf("%d %d %d", &begin1, &end1, &mid1);
		for (int j = mid1; j <= end1; j++){
			temp[k++] = baguni[j-1];
		}
		for (int j = begin1; j < mid1; j++){
			temp[k++] = baguni[j-1];
		}
		for (int j = begin1; j <= end1; j++){
			baguni[j - 1] = temp[p++ ];
		}
	}
	for (int i = 0; i < n; i++){
		printf("%d ", baguni[i]);
	}
}