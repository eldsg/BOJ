#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<string.h>
using namespace std;
int temp[10001][6];
int minnum;
int check(int j, int i){
	switch(i){
		case 0:
            minnum = temp[j][5];
			temp[j][5] = 0;
			temp[j][i] = 0;
			break;	
		case 1:
            minnum = temp[j][3];
			temp[j][3] = 0;
			temp[j][i] = 0;
			break;
        case 2:
            minnum = temp[j][4];
            temp[j][4] = 0;
			temp[j][i] = 0;
			break;
		case 3:
            minnum = temp[j][1];
			temp[j][1] = 0;
			temp[j][i] = 0;
			break;
		case 4:
            minnum = temp[j][2];
            temp[j][2] = 0;
			temp[j][i] = 0;
			break;
		case 5:
            minnum = temp[j][0];
			temp[j][0] = 0;
			temp[j][i] = 0;
			break;
	}
	sort(temp[j], temp[j]+6);
	return temp[j][5];
}
int main(){
	int N;
	int num[10001][6], result = 0, solve = 0;
	scanf("%d", &N);
	for(int i = 0; i<N; i++){
		for(int j = 0; j<6; j++){
			scanf("%d", &num[i][j]);
		}
	}
	for(int i = 0; i<6; i++){
		memcpy(temp, num, sizeof(num));
		result = 0;
		minnum = temp[0][i];
		result += check(0, i);
		for(int j = 1; j<N; j++){
			for(int k = 0; k<6; k++){
				if(minnum == temp[j][k]){
					result+=check(j,k);
					break;
				}
			}
		}
		if(result > solve) solve = result;
	}
	printf("%d\n", solve);
}
