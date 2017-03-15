#include<cstdio>
#include<map>
#include<algorithm>

using namespace std;
int zerocnt = 0;
int main(){
	int num;
	while(scanf("%d", &num) && num != 0){
		int nums[15];
		zerocnt = 0;
		for(int i = 0; i < num; i++){
			scanf("%d", nums+i);
			if(nums[i] == 0) zerocnt++;
		}
		sort(nums, nums+num);
		int a = nums[zerocnt], b = nums[zerocnt+1];
		if(num%2){
			for(int i = 0; i < zerocnt; i++){
				if(i%2==0){
					a*=10;
				}
				else b*=10;
			}
			if(zerocnt%2 == 1){
				for(int i = zerocnt+2; i < num; i++){
					if(i%2==1){
						b*=10;
						b+=nums[i];
					}
					else{
						a*=10;
						a+=nums[i];
					}

				}
			}
			else{
				for(int i = zerocnt+2; i < num; i++){
					if(i%2==0){
						a*=10;
						a+=nums[i];
					}
					else{
						b*=10;
						b+=nums[i];
					}
				}
			}
		}
		else{
			for(int i = 0; i < zerocnt; i++){
				if(i%2==0){
					a*=10;
				}
				else b*=10;
			}
			if(zerocnt%2 == 1){
				for(int i = zerocnt+2; i < num; i++){
					if(i%2==1){
						b*=10;
						b+=nums[i];
					}
					else{
						a*=10;
						a+=nums[i];
					}
				}
			}
			else{
				for(int i = zerocnt+2; i < num; i++){
					if(i%2==0){
						a*=10;
						a+=nums[i];
					}
					else{
						b*=10;
						b+=nums[i];
					}
				}
			}
		}
		printf("%d\n", a+b);
	}
}

