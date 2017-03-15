#include<cstdio>

int main(){
	int nums[51], n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", nums+i);
	}
	int ret = 0, ret2 = 0;
	int maxx = 0;
	for(int i = 0; i < n; i++){
		if(nums[i] > maxx){
			maxx = nums[i];
			ret++;
		}
	}
	maxx = 0;
	for(int i = n-1; i >= 0; i--){
		if(nums[i] > maxx){
			maxx = nums[i];
			ret2++;
		}
	}
	printf("%d\n%d\n", ret, ret2);
}
