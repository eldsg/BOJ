#include<cstdio>
#include<algorithm>

int main(){
	long long int numb[100000+1];
	long long int num, ret = 0, maxx = 1;
	scanf("%I64d", &num);
	for(int i = 0; i<num; i++) scanf("%I64d", numb+i);
	for(int i = 1; i<num; i++){
		if(numb[i] > numb[i-1]) maxx++;
		else {
			ret = std::max(ret, maxx);
			maxx=1;
		}
	}
	ret = std::max(ret, maxx);
	printf("%I64d\n", ret);
}
