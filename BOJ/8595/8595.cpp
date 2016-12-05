#include<cstdio>
#include<cstdlib>
#include<cstring>

int check;
int main(){
	scanf("%d\n", &check);
	char a;
	long long ret = 0;
	long long temp = 0;
	bool check = false;
	while((a=getchar()) != EOF){
		if(a >= '0' && a <= '9'){
			if(check){
				temp *= 10;
				temp += a-'0';	
			}
			else{
				temp += a-'0';
				check = true;
			}
		}
		else{
			check = false;
			ret += temp;
			temp = 0;
		}
	}
	printf("%lld\n", ret);
}
