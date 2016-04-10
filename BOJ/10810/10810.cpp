#include<stdio.h>
using namespace std;
int n, m, a, b, c;
int baguni[101];
int main(){
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++){
		scanf("%d %d %d", &a, &b, &c);
		for (int j = a; j <= b; j++){
			baguni[j-1] = c;
		}
	}
	for (int i = 0; i < n; i++){
		printf("%d ", baguni[i]);
	}
}