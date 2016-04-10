#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
using namespace std;
list<int> t[101];
list<int>::iterator iter;
list<int>::iterator iter2;
int main(){
	int N, M;
	cin >> N >> M;
	pair<int, int> *p = new pair<int, int>[M];
	for (int i = 1; i <= N; i++){
		t[i].push_back(i);
	}
	for (int i = 0; i < M; i++){
		cin >> p[i].first >> p[i].second;
		if (p[i].first > p[i].second) swap(p[i].first, p[i].second);
	}
	sort(p, p + M);
	bool check1 = true, check2 = true;
	int ta = 10;
	while (ta--){
		for (int i = 0; i < M; i++){
			for (iter = t[1].begin(); iter != t[1].end(); iter++){
				if (*iter == p[i].first){
					check1 = false;
				}
				if (*iter == p[i].second){
					check2 = false;
				}
			}
			if (!check1 && check2) t[1].push_back(p[i].second);
			else if (check1 && !check2) t[1].push_back(p[i].first);
			check1 = true, check2 = true;
		}
	}
	cout << t[1].size() - 1 << endl;
}