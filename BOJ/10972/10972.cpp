#include<cstdio>
#include<cstdlib>
#include<algorithm>
int permutation[10001];

int main(){
	int num;
	scanf("%d", &num);
	for(int i = 0; i < num; i++) scanf("%d", &permutation[i]);
	if(std::next_permutation(permutation, permutation+num)){
		for(int i = 0; i < num; i++) printf("%d ", permutation[i]);
	}
	else printf("-1\n");
}
