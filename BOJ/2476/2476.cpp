#include<cstdio>
#include<algorithm>

int n, human[1001][3], max = 0;

int check(int *dice){
	int maxdice = 0;
	if(dice[0] == dice[1] && dice[1] == dice[2]) return 10000+dice[0]*1000;
	else if(dice[0] == dice[1] && dice[1] != dice[2]) return 1000+dice[0]*100;
	else if(dice[0] == dice[2] && dice[1] != dice[2]) return 1000+dice[0]*100;
	else if(dice[1] == dice[2] && dice[0] != dice[1]) return 1000+dice[1]*100;
	else{
		maxdice = std::max(dice[0],dice[1]);
		maxdice = std::max(maxdice, dice[2]);
		return maxdice*100;
	}
}

int main(){
	scanf("%d", &n);
	for(int i = 0; i<n; i++){
		scanf("%d %d %d", &human[i][0], &human[i][1], &human[i][2]);
		max = std::max(max, check(human[i]));
	}
	printf("%d\n", max);
	
}
