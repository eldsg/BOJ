#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <stack>
#include <algorithm>

using namespace std;

int main(){
	int num;
	stack<int> ret;
	scanf("%d", &num);
	for(int i = 0; i<num; i++){
		char a[10];
		int b;
		scanf("%s", a);
		if(strcmp(a, "push") == 0){
			scanf(" %d\n", &b);
			ret.push(b);
		}
		else if(strcmp(a, "pop") == 0){
			if(ret.empty()) printf("-1\n");
			else{ 
				printf("%d\n", ret.top());
				ret.pop();
			}
		}
		else if(strcmp(a, "top") == 0){
			if(ret.empty()) printf("-1\n");
			else printf("%d\n", ret.top());
		}
		else if(strcmp(a, "size") == 0){
			printf("%lu\n", ret.size());
		}
		else if(strcmp(a, "empty") == 0){
			if(ret.empty()) printf("1\n");
			else printf("0\n");
		}
	}
}
