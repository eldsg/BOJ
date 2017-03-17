#include<cstdio>
#include<cstring>

int proc(int cn){
	for(int i = 2; i <= 64; i++){
		int check[1000000];
		int temp = cn;
		int j = 0;
		while(temp){
			check[j] = temp%i;
			temp/=i;
			j++;
		}
		bool c = false;
//		for(int k = 0; k < j; k++) printf("%d ", check[k]);
//		printf("\n");
		for(int k = 0; k < j/2; k++){
			if(check[k] != check[j-k-1]){
				c = true;
				break;
			}
		}
		if(!c) return 1;
	}
	return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int cn;
		scanf("%d", &cn);
		printf("%d\n", proc(cn));
	}
}
