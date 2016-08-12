#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
int ret[100001];

void process(int input){
	int result = -1111111, dp = -111111;
	for(int i = 0; i<input; i++){
		scanf("%d", &ret[i]);
	}
	for(int i = 0; i < input; i++){
		dp = std::max(dp, 0) + ret[i];
		result = std::max(result,dp);
	}
	printf("%d\n", result);
}
int main(){
	int input;
	scanf("%d", &input);
	process(input);	
}
