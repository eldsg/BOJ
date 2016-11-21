#include<cstdio>
#include<cstdlib>

int main(){
	int n;
	int num[101];
	int min = 101;
	int total = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &num[i]);
		if(num[i] < min) min = num[i];
		total += num[i];
	}
	total -= min*n;
	if(total % 2 == 0){
		printf("%d\n%d\n", min, total/2);
		while(1){
			bool check = false;
			int count = 0;
			for(int i = 0; i < n; i++){
				if(count >= 2){
					printf("0");
				}
				else if(num[i] > min){
					printf("1");
					num[i]-=1;
					count++;	
				}
				else printf("0");
			}
			printf("\n");
			for(int i = 0; i < n; i++){
				if(num[i] != min){
					check = true;
				}
			}
			if(!check) break;
		}
	}
	else{

	}
}
