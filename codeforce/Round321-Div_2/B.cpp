#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;

vector< pair<long long, long long> > v;
int main(){
	long long int a, b, ret = 0;
	scanf("%I64d %I64d", &a, &b);
	for(long long i = 0; i<a; i++){
		long long c, d;
		scanf("%I64d %I64d", &c, &d);
		v.push_back(make_pair(c, d));
	}
	sort(v.begin(), v.end());
	long long size = v.size();
	for(long long i = size; i>=0; i--){
		if(v[i].first <= b) {
			ret += v[i].second;
			b = v[i].first;
		}
	}
	printf("%I64d\n", ret);
}
