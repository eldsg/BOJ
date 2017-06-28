#include<cstdio>
#include<vector>
using namespace std;
vector<pair<int ,int> > po;

int main(){
	int m, b;
	scanf("%d%d", &m, &b);
	int k = 0;
	while(1){
		int ret = m*k;
		po.push_back(make_pair(ret, -k+b));
		if(-k+b < 0) break;
		k++;
	}
	unsigned long long s = 0, ret = 0;
	for(int i = 0; i < po.size(); i++){
		s = 0;
		int t1 = po[i].first;
		int t2 = po[i].second;
		long long sumt1 = ((long long)t1*t1 + t1)/2;
		long long sumt2 = ((long long)t2*t2 + t2)/2;
		sumt1 *= t2+1;
		sumt2 *= t1+1;
		s = sumt1 + sumt2;
		if(s > ret) ret = s;
	}
	printf("%lld\n", ret);
}
