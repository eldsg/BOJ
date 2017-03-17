#include<cstdio>
#include<cstdlib>
#include<queue>
#include<string>
#include<iostream>

using namespace std;

int main(){
	int t;
	scanf("%d\n", &t);
	while(t--){
		int num, fullnum=0;
		deque<int> ret;
		string stat, nums;
		getline(cin, stat);
		getchar();
		scanf("%d", &num);
		getline(cin, nums);
		int size = nums.size();
		string temp = "";
		bool f = true;
		bool err = false;
		for(int k=0, i=1; k<num && i< size; i++){
			if(nums[i] >= '0' && nums[i] <= '9') fullnum = fullnum*10 + (nums[i]-'0');
			else{
				ret.push_back(fullnum);
				fullnum = 0;
				k+=1;
			}
		}
	/*	
		for(int i = 0; i < ret.size(); i++){
			printf("%d ", ret[i]);
		}
	*/	
		size = stat.size();
		for(int i = 0; i < size; i++){
			if(stat[i] == 'R'){
				if(f) f = false;
				else f = true;
			}
			else{
				if(!ret.empty()){
					if(!f){
						ret.pop_back();
					}
					else{
						ret.pop_front();	
					}
				}
				else{
					err = true;
					break;
				}
			}
		}
		if(err) printf("error\n");
		else{
			size = ret.size();
			if(f){
				printf("[");
				for(int i = 0; i < size; i++){
					printf("%d", ret[i]);
					if(i!=size-1) printf(",");
				}
				printf("]");
			}
			else{
				printf("[");
				for(int i = size-1; i >=0; i--){
					printf("%d", ret[i]);
					if(i!=0) printf(",");
				}
				printf("]");	
			}
			printf("\n");
		}
	}
}
