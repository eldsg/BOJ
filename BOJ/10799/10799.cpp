#include<cstdio>
#include<cstring>
#include<cstdlib>

int main(){
	char str[100001];
	scanf("%s", str);
	int size = strlen(str);
	bool prev = false;
	int left = 0, ret = 0;
	for(int i = 0; i<size; i++){
		if(str[i] == '(' && prev){
			left++;
			prev = 1;
		}
		else if(str[i] == ')' && prev){
			left -= 1;
			prev = 0;
			ret += left;
		}
		else if(str[i] == ')'){
			ret += 1;
			prev = 0;
			left -= 1;
		}
		else if(str[i] == '('){
			left += 1;
			prev = 1;
		}
	}
	printf("%d\n", ret);	
}
