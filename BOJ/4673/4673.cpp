#include<cstdio>
#include<cstdlib>
#include<cstring>

bool check[10001];

void proc(){
	for(int i = 1; i <= 10000; i++){
		char temp[6];
		int ret = 0;
		sprintf(temp, "%d", i);
		for(int j = 0; j < strlen(temp); j++){
			ret += temp[j]-'0';
		}
		check[i+ret] = true;
	}
	for(int i = 1; i <= 10000; i++){
		if(!check[i]) printf("%d\n", i);
	}
}

int main(){
	proc();
}
