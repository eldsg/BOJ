#include<cstdio>
#include<map>
#include<cmath>

using namespace std;

int gram[31];
map<int, bool> check;
map<int, bool> temp;
int n, t;

int main(){
	scanf("%d", &n);
	for(int i = 0; i < n; i++) scanf("%d", gram+i);
	scanf("%d", &t);
	check[0] = true;
	for(int i = 0; i < n; i++){
		for(int j = 0; j <= 15000; j++){
			if(check[j]){
				int left = abs(gram[i]-j), right = abs(gram[i]+j);
				if(left <= 15000) temp[left] = true;
				if(right <= 15000) temp[right] = true;
				temp[gram[i]] = true;
			}
		}
		for(int j = 0; j <=15000; j++) check[j] = temp[j];
	}
	for(int i = 0, j; i < t; i++) {
		scanf("%d", &j);
		if(check[j]) printf("Y ");
		else printf("N ");
	}
}
