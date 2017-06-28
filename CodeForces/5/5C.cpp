#include<cstdio>
#include<cstdlib>

char str[1000001];
int lb[1000001];
int rb[1000001];
int t = 0, m = 1, ret = 0;
int main(){
	scanf("%s", str);
	for(int i = 0; str[i]; i++){
		if(str[i] == '(') lb[++t] = i;
		else if(t){
			rb[i] = i-lb[t]+1+rb[lb[t]-1];
			t--;
			if(rb[i] == ret) m++;
			if(rb[i] > ret) {
				ret = rb[i];
				m = 1;
			}
		}
	}
	printf("%d %d\n", ret, m);
}
