#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<memory.h>
#include<iostream>
using namespace std;
int main(){
	int testcase;
	scanf("%d", &testcase);
	while(testcase--){
		int num, num2;
		bool check = false;
		char temp[10], temp1[10];		
        memset(temp, 0, sizeof(temp));
        memset(temp1, 0, sizeof(temp1));
        scanf("%d", &num);
		sprintf(temp, "%d", num);
		int size = strlen(temp);
		int k = size;
		for(int i = 0; i<size; i++){
			temp1[--k] = temp[i];
		}
		num2 = atoi(temp1);
		num+= num2;
		memset(temp, 0, sizeof(temp));
		sprintf(temp, "%d", num);
		size = strlen(temp);
		k = size;
			for(int i = 0; i<size/2; i++){
				if(temp[i] != temp[--k]){
					check = true;
					break;
				}
			}
		if(check) printf("NO\n");
		else printf("YES\n");
	}
}
