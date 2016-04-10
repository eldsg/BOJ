#include<stdio.h>
#include<algorithm>
using namespace std;

int main(){
	int testnum, num[101], findnum, result=0;
	scanf("%d", &testnum);
	for (int i = 0; i < testnum; i++){
		scanf("%d", &num[i]);
	}
	sort(num, num + testnum);
	scanf("%d", &findnum);
	for (int i = 0; i < testnum; i++){
		if (num[i] == findnum) result++;
		else if (num[i] > findnum) break;
	}
	printf("%d\n", result);
}