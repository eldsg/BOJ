#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<string.h>
using namespace std;
int main(){
	int testcase;
	scanf("%d", &testcase);
	while(testcase--){
		char str[1024];
		int result = 0, positionmove = 999999999;
		scanf("%s", str);
		int size = strlen(str);
		for(int i = 0; i<size; i++){
			result += min(str[i]-'A', 'Z' - str[i] + 1);
		}
		for(int i = 0, j; i<size; i++){
			for(j = i+1; j<size && str[j] == 'A'; j++);
			positionmove = min(positionmove, min(2*i+size-j,2*(size-j)+i));
		}
		printf("%d\n", result+positionmove);
	}
}
