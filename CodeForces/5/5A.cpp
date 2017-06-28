#include<cstdio>

int main(){
	int joinnum = 0, ret = 0;
	char str[1001];
	while(gets(str)){
		if(str[0] == '+'){
			joinnum++;
		}
		else if(str[0] == '-'){
			joinnum--;
		}
		else{
			int i = 0, j, k;
			while(str[i++] != ':');
			for(j = i, k = 0; str[j]; j++, k++);
			ret += joinnum * k;
		}
	}
	printf("%d\n", ret);
}
