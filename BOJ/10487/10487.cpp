#include <bits/stdc++.h>

using namespace std;

char print[6] = { '/', '*', '+', '-', '4'};
int t, n;
map<int, vector<int> > ret;
void init(){
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			for(int k = 0; k < 4; k++){
				vector<int> temp;
				temp.push_back(4); temp.push_back(i), temp.push_back(4), temp.push_back(j), temp.push_back(4), temp.push_back(k), temp.push_back(4);
				//[8] = {4, i, 4, j, 4, k, };
				int calc[8];
				int m = 0;
				for(int l = 0; l < 7; l++){
					if(l&1 && temp[l] < 2){
						if(temp[l] == 0) calc[m-1] /= temp[l+1];
						else calc[m-1] *= temp[l+1];
						l+=1;
					}
					else{
						calc[m++] = temp[l];
					}
				}
				for(int l = 1; l < m; l+=2){
					if(calc[l] == 2) calc[0] += calc[l+1];
					else calc[0] -= calc[l+1];
				}
				ret[calc[0]] = temp;
			}
		}
	}
}

int main(){
	init();
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		vector<int> temp = ret[n];
		if(temp.size() == 0) printf("no solution\n");
		else{
			for(int i = 0; i < 7; i++){
				printf("%c ", print[temp[i]]);
			}
			printf("= %d\n", n);
		}
	}
}
	