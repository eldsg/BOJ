#include <cstdio>
#include <cstdlib>
#include <cstring>

int number[31];

int main(){
	int num;
	int value, count=0, from=0, a;
	memset(number, 0, sizeof(number));
	scanf("%d", &num);
	for(int i = 0; i < num; i++){
		scanf("%d", &a);
		from = (from+count) % num;
		while(number[from]) from = (from+1)%num;
		count = number[from] = a;
	}
	printf("%d\n", num);
	for(int i = 0; i < num; i++) printf("%d ", number[i]);

}
