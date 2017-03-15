#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;
int a[100001];
int main(){
	int i, j, T;
	scanf("%d", &T);
	for (i = 1; i <= T; i++){
		int v;
		scanf("%d", &v);
		a[v] = v - i;
	}
	for(i = 1; i <= T; i++){
		printf("%d\n", a[i]);
	}

}
