#include<cstdio>
int num, a, i, oc =0, zc =0;
int main(){
	scanf("%d", &num);
	for(i=0; i<num; i++){
		scanf("%d", &a);
		if(a) oc++;
		else zc++;
	}
	printf("%s", oc > zc ? "Junhee is cute!" : "Junhee is not cute!");
}
