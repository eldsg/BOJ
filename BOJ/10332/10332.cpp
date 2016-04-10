#include<stdio.h>
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
int main(){
	int result = 0;
	vector<pair<int, int> > hi;
	int length, oracle;
	scanf("%d %d", &length, &oracle);
	while (oracle--){
		int a, b;
		scanf("%d %d", &a, &b);
		hi.push_back(make_pair(a, b));
	}
	sort(hi.begin(), hi.end());
	int size = hi.size();
	for (int i = 0; i < size; i++){
		for (int j = i + 1; j < size; j++){
			if (hi[i].second >= hi[j].first && hi[i].second < hi[j].second){
				hi[i].second = hi[j].second;
				hi[j].first = -1;
				hi[j].second = -1;
			}
			else if (hi[i].first <= hi[j].first && hi[i].second >= hi[j].second){
				hi[j].first = -1;
				hi[j].second = -1;
			}
		}
	}
	for (int i = 0; i < size; i++){
		if (hi[i].first != -1 && hi[i].second != -1){
				result += hi[i].first;
				result += 3 * (hi[i].second - hi[i].first);
				result -= hi[i].second;
		}
	}
	result += length+1;
	printf("%d", result);
}