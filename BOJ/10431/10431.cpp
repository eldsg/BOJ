#include<stdio.h>
#include<string.h>

int main(){
	int student[21], testcase, num, ts;
	scanf("%d", &testcase);
	while(testcase--){
		int move = 0, i, j, k;
		memset(student, 0, sizeof(student));
		scanf("%d", &num);
		for(i = 0; i<20; i++){
			scanf("%d", &ts);
			for(j = 0; j<i; j++){
				if(student[j] > ts){
					for(k = i; k>j; k--){
						student[k] = student[k-1];
						move++;			
					}
					break;
				}
			}
			student[j] = ts;
		}
	printf("%d %d\n", num, move);
	}
}
