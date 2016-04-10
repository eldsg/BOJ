#include<stdio.h>
using namespace std;
int n, m, a, b, c;
int baguni[101], temp[101];
int main(){
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++){
		baguni[i] = i + 1;
	}
	for (int i = 0; i < m; i++){
		int k = 0;
		scanf("%d %d", &a, &b);
		for (int j = a; j <= b; j++){
			temp[k++] = baguni[j - 1];
		}
		for (int j = a; j <= b; j++){
			baguni[j - 1] = temp[--k];
		}
	}
	for (int i = 0; i < n; i++){
		printf("%d ", baguni[i]);
	}
}