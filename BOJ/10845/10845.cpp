#include<queue>
#include<cstdio>
#include<cstring>

using namespace std;

int main(){
	queue<int> ret;
	int num;
	scanf("%d", &num);
	while(num--){
		char str[10];
		int a;
		scanf("%s", str);
		if(strcmp(str, "push") == 0){
			scanf(" %d\n", &a);
			ret.push(a);
		}
		else if(strcmp(str, "pop") == 0){
			if(ret.empty()) printf("-1\n");
			else{
				printf("%d\n", ret.front());
				ret.pop();
			}
		}
		else if(strcmp(str, "front") == 0){
			if(ret.empty()) printf("-1\n");
			else{
				printf("%d\n", ret.front());
			}
		}
		else if(strcmp(str, "back") == 0){
			if(ret.empty()) printf("-1\n");
			else {
				printf("%d\n", ret.back());
			}
		}
		else if(strcmp(str, "size") == 0){
			printf("%d\n", ret.size());
		}
		else if(strcmp(str, "empty") == 0){
			if(ret.empty()) printf("1\n");
			else printf("0\n");
		}
	}
}
