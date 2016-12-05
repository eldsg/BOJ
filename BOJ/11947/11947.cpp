#include<cstdio>
#include<cstdlib>
#include<cstring>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long num;
		scanf("%lld", &num);
		if(num==1000000000) printf("8999999999000000000\n");
		else{
			char str[10];
			char str2[10];
			char str3[10];
			sprintf(str, "%lld", num);
			int size = strlen(str);
			str3[0] = '5';
			for(int i = 0; i < size; i++){
				str2[i] = '9';
				if(i) str3[i] = '0';
			}
			str2[size] = '\0';
			str3[size] = '\0';
			long long num2 = atol(str2);
			long long num3 = atoi(str3);
			if(str[0] >= '5'){
				printf("%lld\n", num3*(num2-num3));
			}
			else{
				printf("%lld\n", num*(num2-num));
			}
		}
	}
}
