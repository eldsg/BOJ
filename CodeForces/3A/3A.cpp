#include<cstdio>

int main(){
	char cur[3], next[3];
	scanf("%s %s", cur, next);
	int gmov = next[0] - cur[0];
	int smov = next[1] - cur[1];
	if(gmov == 0 && smov == 0) puts("0");
	else if(gmov == 0){
		if(smov > 0){
			printf("%d\n", smov);
			for(int i = 0; i < smov; i++) puts("U");
		}
		else{
			printf("%d\n", -smov);
			for(int i = 0; i < -smov; i++) puts("D");
		}
	}
	else if(smov == 0){
		if(gmov > 0){
			printf("%d\n", gmov);
			for(int i = 0; i < gmov; i++) puts("R");
		}
		else{
			printf("%d\n", -gmov);
			for(int i = 0; i < -gmov; i++) puts("L");
		}
	}
	else if(smov > 0){
		if(gmov > 0){
			if(smov > gmov){
				printf("%d\n", smov);
				for(int i = 0; i < gmov; i++) puts("RU");
				for(int i = 0; i < smov-gmov; i++) puts("U");
			}
			else{
				printf("%d\n", gmov);
				for(int i = 0; i < smov; i++) puts("RU");
				for(int i = 0; i < gmov-smov; i++) puts("R");
			}
		}
		else{
			if(smov > -gmov){
				printf("%d\n", smov);
				for(int i = 0; i < -gmov; i++) puts("LU");
				for(int i = 0; i < smov+gmov; i++) puts("U");
			}
			else{
				printf("%d\n", -gmov);
				for(int i = 0; i < smov; i++) puts("LU");
				for(int i = 0; i < -gmov-smov; i++) puts("L");
			}
		}
	}
	else if(smov < 0){
		if(gmov > 0){
			if(-smov > gmov){
				printf("%d\n", -smov);
				for(int i = 0; i < gmov; i++) puts("RD");
				for(int i = 0; i < -smov-gmov; i++) puts("D");
			}
			else{
				printf("%d\n", gmov);
				for(int i = 0; i < -smov; i++) puts("RD");
				for(int i = 0; i < gmov+smov; i++) puts("R");
			}
		}
		else{
			if(-smov > -gmov){
				printf("%d\n", -smov);
				for(int i = 0; i < -gmov; i++) puts("LD");
				for(int i = 0; i < -smov+gmov; i++) puts("D");
			}
			else{
				printf("%d\n", -gmov);
				for(int i = 0; i < -smov; i++) puts("LD");
				for(int i = 0; i < -gmov+smov; i++) puts("L");
			}
		}
	}

}
