#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int a[3];
	char d[4];
	scanf("%d%d%d", &a[0], &a[1], &a[2]);
	sort(a, a + 3);
	scanf("%s", d);
	for (int i = 0; i < 3; i++){
		if (d[i] == 'A') printf("%d ", a[0]);
		else if (d[i] == 'B') printf("%d ", a[1]);
		else printf("%d ", a[2]);
	}
}