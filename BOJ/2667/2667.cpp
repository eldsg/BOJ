#include<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>

char baecu[26][26];
int danzi[26][26];
int result, t, count;
std::vector<int> ret;
void solve(int x, int y){
	count++;
	danzi[x][y] = 0;
	if(y-1 >= 0 && danzi[x][y-1]) solve(x, y-1);
	if(y+1 < t && danzi[x][y+1]) solve(x, y+1);
	if(x-1 >= 0 && danzi[x-1][y]) solve(x-1, y);
	if(x+1 < t && danzi[x+1][y]) solve(x+1, y);
}
int main(){
	scanf("%d", &t);
	for(int i = 0; i<t; i++){
		scanf("%s", baecu[i]);
	}
	for(int i = 0; i<t; i++){
		for(int j = 0; j<t; j++){
			danzi[i][j] = baecu[i][j] -'0';
		}
	}
	for(int i = 0; i<t; i++){
		for(int j = 0; j<t; j++){
			if(danzi[i][j]){
				count = 0;
				solve(i, j);
				ret.push_back(count);
				result++;
			}
		}
	}
	printf("%d\n", result);
	std::sort(ret.begin(), ret.end());
	for(std::vector<int>::iterator it=ret.begin(); it!=ret.end(); it++){
		printf("%d\n", *it);
	}
}

