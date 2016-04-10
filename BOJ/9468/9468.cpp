#include<stdio.h>

int main(){
	int testcase;
	scanf("%d", &testcase);
	while (testcase--){
		int num[20], index, count = 0, min;
		scanf("%d", &index);
		for (int i = 0; i < 15; i++){
			scanf("%d", &num[i]);
			if (i != 0){
				if (num[i] > num[i - 1]) count++;
			}
		}
		printf("%d %d\n", index, count);
	}
}