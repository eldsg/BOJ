#include<cstdio>
#include<algorithm>
int main(){
	int number[1001], test, ret = 0;
	scanf("%d", &test);
	for(int i = 0; i< test; i++){
		scanf("%d", &number[i]);
	}
	std::sort(number, number+test);
	ret = number[0];
	for(int i = 1; i < test; i++){
		number[i] += number[i-1];
		ret += number[i];
	}
	printf("%d\n", ret);
}
