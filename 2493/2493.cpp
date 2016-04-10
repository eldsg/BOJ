#include<stdio.h>
int tower[500001];
int result[500001];
int main(){
	int N, max=0;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++){
		scanf("%d", &tower[i]);
		if (max < tower[i]){
			max = tower[i];
			printf("0 ");
		}
		else
		{
			int dst = i - 1;
			for (; tower[dst] < tower[i]; dst = result[dst]);
			result[i] = dst;
			printf("%d ", dst);
		}
	}
}