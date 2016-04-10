#include<iostream>
#include<stdio.h>
#include<string>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
	int testcase;
	scanf("%d", &testcase);
	getchar();
	while(testcase--){
		string action;
		int tx=0, ty=0, mx1=0, mx2=0, my1=0, my2=0;
		int directionX = 0, directionY = 1, temp;
		getline(cin, action);
		int size = action.size();
		for(int i = 0; i<size; i++){
			if(action[i] == 'F'){
				tx+=directionX;
				ty+=directionY;
			}
			else if(action[i] == 'B'){
				tx-=directionX;
				ty-=directionY;
			} 
			else if(action[i] == 'R'){
				temp = directionX;
				directionX = directionY;
				directionY = -temp;
			}
			else{
				temp = directionX;
				directionX = -directionY;
				directionY = temp;
			}
			mx1 = max(tx, mx1);
			mx2 = min(tx, mx2);
			my1 = max(ty, my1);
			my2 = min(ty, my2);	
		}
		printf("%d\n", (mx1-mx2) * (my1-my2));
	}

}
