#include<stdio.h>

int main(){
	int num, num1;
	char c;
	while(~scanf("1/%d", &num)){
		getchar();
		int count = 0;
		for(int i = num+1; i <= 2*num; i++){
			if( (i*num)%(i-num) == 0 ) count++;
		}
		printf("%d\n", count);
	}
}
