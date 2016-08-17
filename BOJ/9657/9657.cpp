#include<cstdio>

int stone[1001]={-1,1,0,1,1, }, num;

int main(){
	scanf("%d", &num);
	for(int i = 5; i<=1000; i++){
		if(stone[i-1] == 0 || stone[i-3] == 0 || stone[i-4] == 0) stone[i] = 1;
		else stone[i] = 0;
	}
	printf("%s\n", stone[num] == 1 ? "SK" : "CY");
}
