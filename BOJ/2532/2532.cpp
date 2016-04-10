#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#define MAX_N 500001
#define MAX_S 10000000
struct POINT{ 
	int number, x, y;
} po[MAX_N]; 
int test_case;
int du[MAX_N], result; 
int cmp(const void *a, const void *b) {
	POINT A = *(POINT *)a; 
	POINT B = *(POINT *)b;
	if (A.x == B.x) return B.y - A.y; 
	return A.x - B.x;
}
void solve(int x){
	if (result == 0 || du[result - 1] >= x) {
		du[result++] = x; 
		return; 
	}
	int a, b; 
	a = 0; 
	b = result - 1; 
	while (a <= b) { 
		int m = (a + b) / 2; 
		if (du[m] >= x) a = m + 1;
		else b = m - 1; 
	} 
	du[b + 1] = x;
}
int main(int argc, char** argv) {
		int i, n;
		scanf("%d", &n);
		for (i = 0; i < n; i++){
			scanf("%d %d %d", &po[i].number, &po[i].x, &po[i].y);
		}
		qsort(po, n, sizeof(POINT), cmp);
		int m = 1;
		for (i = 1; i < n; i++){
			if (po[i].x != po[i - 1].x || po[i].y != po[i - 1].y) {
				po[m] = po[i]; m++;
			}
		}
		result = 0;
		for (i = 0; i < m; i++){
			solve(po[i].y);
		}
		printf("%d", result); 
	    return 0;
}