#include <bits/stdc++.h>
using namespace std;
vector<int> bman;
vector<int> bwoman;
vector<int> lman;
vector<int> lwoman;
bool bvisit[100001];
bool lvisit[100001];

int main(){
	int n, cnt = 0, human;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &human);
		if(human < 0) lman.push_back(-human);
		else bman.push_back(human);
	}
	for(int i = 0; i < n; i++){
	 	scanf("%d", &human);
	 	if(human < 0) lwoman.push_back(-human);
	 	else bwoman.push_back(human);
	}
	sort(bwoman.begin(), bwoman.end(), greater<int>());
	sort(lman.begin(), lman.end(), greater<int>());
	int s = lman.size();
	int ss = bwoman.size();
	int j = 0;
	for(int i = 0; i < s; i++){
		for(j; j < ss; j++){
			if(lman[i] > bwoman[j]){
				cnt++;
				j++;
				break;
			}
		}
	}
	sort(lwoman.begin(), lwoman.end(), greater<int>());
	sort(bman.begin(), bman.end(), greater<int>());
	s = lwoman.size();
	ss = bman.size();
	j = 0;
	for(int i = 0; i < s; i++){
		for(j; j < ss; j++){
			if(lwoman[i] > bman[j]){
				cnt++;
				j++;
				break;
			}
		}
	}
	printf("%d\n", cnt);
}
