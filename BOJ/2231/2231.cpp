#include<map>
#include<cstdio>

using namespace std;

map<int, int> ret;

void proc(){
	for(int i = 1; i <= 100000; i++){
		int temp = i, k = 0;
		k += temp;
		while(temp){
			k += temp % 10;
			temp /= 10;
		}
		if(ret[k] == 0) ret[k] = i;
	}
}

int main(){
	proc();
	int k;
	scanf("%d", &k);
	printf("%d\n", ret[k]);
}
