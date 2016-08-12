#include<cstdio>
#include<cstdlib>

typedef struct person{
	int mom, dad, me;
}person;


int main(){
	int num, num2;
	person P[501];
	scanf("%d", &num);
	for(int i = 1; i<=num; i++) P[i].me = 1;
	for(int i = 1; i<=num; i++){
		scanf("%d %d", &P[i].mom, &P[i].dad);
	}
	scanf("%d", &num2);
	for(int i = 0; i<num2; i++){
		int die;
		scanf("%d", &die);
		P[die].me = 0;
	}
	int ret = 0;
	for(int i = 1; i<=num; i++){
		if(P[i].mom != 0 && P[i].dad != 0 && P[i].me != 0){
			if(P[P[i].mom].me != 0 && P[P[i].dad].me != 0) ret++;
		}
	}
	printf("%d\n", ret);
}
