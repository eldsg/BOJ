#include <bits/stdc++.h>
using namespace std;

char comp[7] = {'A', 'E', 'I', 'O', 'U', 'Y'};
vector<int> ret;
int i, j;
int main(){
	char str[101];
	scanf("%s", str);
	for(i = 0, j = -1; str[i]; i++){
		for(int k = 0; k < 6; k++){
			if(str[i] == comp[k]){
				ret.push_back(i - j);
				j = i;
				break;
			}
		}
	}
	ret.push_back(i-j);
	sort(ret.begin(), ret.end());
	printf("%d\n", ret[ret.size()-1]);
}