#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	int t;
	scanf("%d ", &t);
	while(t--){
		string ret = "";
		int num, cnt[1001];
		for(int i = 0; i < 1001; i++) cnt[i] = 0;
//		vector<pair<int, int> > cnt;
		scanf("%d", &num);
		for(int i = 0; i < num; i++){
			char a;
			int b, c;
			scanf("\n%c%d%d", &a, &b, &c);
			for(int j = b; j < c; j++){
				cnt[j]++;
			}
		}
		/*
		for(int i = 0; i < cnt.size(); i++){
			printf("%d %d\n", cnt[i].first, cnt[i].second);
		}
		*/
		for(int i = 0; i < 1001; i++){
			if(cnt[i] > 0) printf("%c", cnt[i]+'A'-1);
		}
		printf("\n");
	}
}
