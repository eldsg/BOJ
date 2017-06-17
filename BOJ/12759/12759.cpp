#include<cstdio>

int mm[4][4];

int check(int i){
	if(mm[1][1] == mm[1][2] && mm[1][1] == mm[1][3] && mm[1][1] == i) return i;
	if(mm[2][1] == mm[2][2] && mm[2][1] == mm[2][3] && mm[2][1] == i) return i;
	if(mm[3][1] == mm[3][2] && mm[3][1] == mm[3][3] && mm[3][1] == i) return i;
	
	if(mm[1][1] == mm[2][2] && mm[1][1] == mm[3][3] && mm[1][1] == i) return i;
	if(mm[1][3] == mm[2][2] && mm[1][3] == mm[3][1] && mm[1][3] == i) return i;

	if(mm[1][1] == mm[2][1] && mm[1][1] == mm[3][1] && mm[1][1] == i) return i;
	if(mm[1][2] == mm[2][2] && mm[1][2] == mm[3][2] && mm[1][2] == i) return i;
	if(mm[1][3] == mm[2][3] && mm[1][3] == mm[3][3] && mm[1][3] == i) return i;
	return 0;
}

int main(){
	int start, y, x;
	scanf("%d", &start);
	while(scanf("%d %d", &y, &x) != EOF){
		int next;
		if(start == 1){
			mm[y][x] = 1;
			next = 2;
		}
		else if(start == 2){
			mm[y][x] = 2;
			next = 1;
		}
		if(check(start)){
			printf("%d\n", start);
			break;
		}
		start = next;
	}
	puts("0");
}
