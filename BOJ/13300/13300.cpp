#include<cstdio>
#include<map>

using namespace std;

map<int, int> boy;
map<int, int> girl;

int main(){
	int a, b, ret = 0;
	scanf("%d %d", &a, &b);
	for(int i = 0; i < a; i++){
		int c, d;
		scanf("%d %d", &c, &d);
		if(c) boy[d]++;
		else girl[d]++;
	}
	for(int i = 1; i<=6; i++){
		if(boy[i]){
			if(boy[i]%b) ret+=boy[i]/b+1;
			else ret+=boy[i]/b;
		}
		if(girl[i]){
			if(girl[i]%b) ret+=girl[i]/b+1;
			else ret+=girl[i]/b;
		}
	}
	printf("%d\n", ret);
}
