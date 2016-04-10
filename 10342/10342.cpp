#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<memory.h>
using namespace std;

int main(){
	int k = 1;
	while(1){
		int a, b, px, py;
		scanf("%d %d", &a, &b);
		if(a == 0 && b==0 ) break;
		char mappee[22][22];
		int setting;
		memset(mappee, 0, sizeof(mappee));
		for(int i = 1; i<=b; i++){
			for(int j = 1; j<=a; j++){
				scanf(" %c", &mappee[i][j]);
				if(mappee[i][j] == '*'){
					py = i;
					px = j;
				}
			}
		}
		if(mappee[py-1][px] == '.' || mappee[py-1][px] == '/' || mappee[py-1][px] == '\\') setting = 1;
		else if(mappee[py+1][px] == '.' || mappee[py+1][px] == '/' || mappee[py+1][px] == '\\') setting = 2;
		else if(mappee[py][px-1] == '.' || mappee[py][px-1] == '/' || mappee[py][px-1] == '\\') setting = 3;
		else if(mappee[py][px+1] == '.' || mappee[py][px+1] == '/' || mappee[py][px+1] == '\\') setting = 4;
		while(1){
			if(mappee[py][px] == 'x'){
				mappee[py][px] = '&';
				break;
			}
			switch(setting){
				case 1: py--;
					if(mappee[py][px] == '/')setting = 4;		
					else if(mappee[py][px] == '\\') setting = 3;
					break;
				case 2: py++;
					if(mappee[py][px] == '/') setting = 3;
					else if(mappee[py][px] == '\\') setting = 4;
					break;
				case 3: px--;
					if(mappee[py][px] == '/') setting = 2;
					else if(mappee[py][px] == '\\') setting = 1;
					break;
				case 4: px++;
					if(mappee[py][px] == '/') setting = 1;
					else if(mappee[py][px] == '\\') setting = 2;
					break;
			}
		}
		printf("HOUSE %d\n", k++);
		for(int i = 1; i<=b; i++){
			for(int j = 1; j<=a; j++){
				printf("%c",mappee[i][j]);
			}
			printf("\n");
		}	
	}
}
