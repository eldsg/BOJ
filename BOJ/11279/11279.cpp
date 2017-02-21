#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<queue>

using namespace std;

priority_queue<int> ret;

int main(){
	int tc;
	scanf("%d", &tc);
	while(tc--){
		int num;
		scanf("%d", &num);
		if(!num){
			if(!ret.empty()){
				printf("%d\n", ret.top());
				ret.pop();
			}
			else{
				printf("0\n");
			}
		}
		else{
			ret.push(num);
		}
	}
}
