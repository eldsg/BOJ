#include<cstdio>

int num[51];

int main(){
	int t;
	scanf("%d", &t);
	for(int i = 0; i < t; i++) scanf("%d", num+i);
	int s = num[2] - num[1];
	int ss = num[1] - num[0];
	if(s == ss){
		printf("%d\n", num[t-1] + s);
		return 0;
	}
	s = num[2]/num[1];
	ss = num[1]/num[0];
	if(s == ss){
		printf("%d\n", num[t-1] * s);
		return 0;
	}
}
