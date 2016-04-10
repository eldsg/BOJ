#include<cstdio>
#include<cstdlib>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int testcase;
	scanf("%d", &testcase);
	while (testcase--){
		vector< pair<int, int> > v;
		int size, count = 0, min = 10000000, a, b;
		scanf("%d", &size);
		for (int i = 0; i < size; i++){
			scanf("%d %d", &a, &b);
			v.push_back(make_pair(a, b));
		}
		sort(v.begin(), v.end());
		for (int i = 0; i < size; i++){
			if (min > v[i].second){
				count++;
				min = v[i].second;
			}
		}
		printf("%d\n", count);
	}
}