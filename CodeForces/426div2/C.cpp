#include <bits/stdc++.h>

using namespace std;

int tc, a, b;

const int maxn = 1e9;

vector<int> prime;
bool isP[100001];

void init(){
	memset(isP, 1, sizeof(isP));
	prime.push_back(2);
	int limit = sqrt(maxn);
	for(int i=3; i<= limit+1; i+=2){
		if(!isP[i]) continue;
		prime.push_back(i);
		for(int j= i*i; j <= limit+1; j+=i*2)
			isP[j] = false;
	}
}
	
int main(){
	init();
	scanf("%d", &tc);
	while(tc--){
		bool chk = false;
		scanf("%d %d", &a, &b);
		if(a==1 && b==1){
			puts("YES");
			continue;
		}
		map<int, int> pri;
		for(auto i : prime){
			//printf("%d\n", i);
			if(a%i == 0 && b%i != 0){
				puts("NO");
				chk = true;
				break;	
			} 
			else if(a%i != 0 && b%i == 0) {
				puts("NO");
				chk = true;
				break;
			}
			else if(a%i == 0 && b%i == 0){
				while(a%i==0){
					a/=i;
					pri[i]++;
				}
				while(b%i==0){
					b/=i;
					pri[i]++;
				}
				if(pri[i] % 3 != 0){
					puts("NO");
					chk = true;
					break;
				}
			}
		}
		if(!chk){
			if(a != 1 || b != 1) puts("NO");
			else puts("YES");
		}
	}
}