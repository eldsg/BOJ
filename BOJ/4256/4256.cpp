#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
#include<iostream>
using namespace std;
void solve(int preo[], int ino[], int num) {
	int temp[1001], temp1[1001], temp2[1001], temp3[1001];
	int size = num, j = 0;
	if (size == 0) return;
	int root = preo[0];
	int left = find(ino, ino + num, root) - ino;
	int right = size - 1 - left;
	for (int i = 1; i < left + 1; i++) {
		temp[j++] = preo[i];
	}
	j = 0;
	for (int i = 0; i < left; i++) {
		temp1[j++] = ino[i];
	}
	j = 0;
	for (int i = left + 1; i < size; i++) {
		temp2[j++] = preo[i];
	}
	j = 0;
	for (int i = left + 1; i < size; i++) {
		temp3[j++] = ino[i];
	}
	solve(temp, temp1, left );
	solve(temp2, temp3, right );
	printf("%d ", root);
}
int main() {
	int testcase, i;
	scanf("%d", &testcase);
	while (testcase--) {
		int num, preo[1001], ino[1001];
		scanf("%d", &num);
		for (i = 0; i < num; i++) {
			scanf("%d", &preo[i]);
		}
		for (i = 0; i < num; i++) {
			scanf("%d", &ino[i]);
		}
		solve(preo, ino, num);
		printf("\n");
	}
}