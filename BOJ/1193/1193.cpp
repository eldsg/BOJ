#include<cstdio>
#include<cstdlib>
#include<math.h>
int main(){
	int num, block = 0, count = 0, b = 1, a;
	scanf("%d", &num);
	while(block < num) block += count++;
	int lastnum = ((count-1)*(count-1)+(count-1))/2;
	if(count % 2 != 0){
		a = count-1;
		a -= abs(lastnum-num);
		b += abs(lastnum-num);
	}
	else{
		a = 1;
		b = count-1;
		a += abs(lastnum-num);
		b -= abs(lastnum-num);	
	}
	printf("%d/%d\n", a, b);
}
