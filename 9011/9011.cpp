#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<memory.h>
#include<iterator>
#include<vector>
int main(){
	int testcase;
	scanf("%d", &testcase);
	while (testcase--){
		bool check = false;
		int num;
		int s[100000], r[100000];
		memset(s, 0, sizeof(s));
		memset(r, 0, sizeof(r));
		scanf("%d", &num);
		std::vector<int> temp(128);
		std::vector<int>::iterator it2;
		for (int i = 0; i < num; i++){
			scanf("%d", &s[i]);
		}
		for (int i = 0; i < num; i++){
			if (s[i] > i){
				check = true;
				break;
			}
		}
		if (!check){
			for (int i = 0; i < num; i++){
				it2 = temp.begin();
				temp.insert(it2 + s[i], i);
			}
			for (int i = 0; i < num; i++){
				r[temp[i]] = i+1;
			}
			for (int i = 0; i < num; i++){
				printf("%d ", r[i]);
			}
			printf("\n");
		}
		else {
			printf("IMPOSSIBLE\n");
		}
	}
}