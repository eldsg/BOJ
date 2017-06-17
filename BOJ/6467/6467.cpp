#include<cstdio>
#include<vector>
#include<cmath>

using namespace std;

vector<int> prime;
bool check[1001];


void proc(){
	for(int i = 2; i <= 1000; i++){
		if(check[i]) continue;
		for(int j = i+i; j <= 1000; j+=i){
			check[j] = true;
		}
	}
	for(int i = 1; i <= 1000; i++){
		if(!check[i]){
//			printf("%d ", i);
			prime.push_back(i);
		}
	}
//	printf("\n");
}

int main(){
	int N, C;
	proc();
	while(scanf("%d%d", &N, &C) != EOF){
		int size = lower_bound(prime.begin(), prime.end(), N) - prime.begin();
		if(!check[N]) size+=1;
		printf("%d %d: ", N, C);
//		printf("\n%d\n", size);
		if(size <= 2*C){
			for(int i = 0; i < size; i++){
				printf("%d ", prime[i]);
			}
		}
		else if(size%2){
			for(int i = size/2-C+1; i < size/2+C; i++){
				printf("%d ", prime[i]);
			}
		}
		else{
			for(int i = size/2-C; i < size/2+C; i++){
				printf("%d ", prime[i]);
			}
		}
		printf("\n\n");
	}
}
