#include<stdio.h>

int main(){
	int number;
	scanf("%d", &number);
	for(int i = 0; i<=number; i++){
		int count = 0;
		for(int j = 1; j<=10; j++){
			int numbers;
			scanf("%d", &numbers);
			if(numbers == ((j-1)%5)+1) count++;
		}
		if(count == 10){
			printf("%d\n", i+1);
		}
	}
}
