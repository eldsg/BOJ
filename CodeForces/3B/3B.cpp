#include<cstdio>
#include<algorithm>
#include<functional>
#include<vector>
using namespace std;

vector<pair<int, int> > k;
vector<pair<int, int> > ca;
long long ksum[100001];
long long csum[100001];
int main(){
	int n, v;
	int m1, m2;
	m1 = m2 = 0;
	scanf("%d%d", &n, &v);
	for(int i = 0; i < n; i++){
		int a, b;
		scanf("%d%d", &a, &b);
		if(a&1) k.push_back(make_pair(b, i+1));
		else ca.push_back(make_pair(b, i+1));
	}
	sort(k.begin(), k.end());
	sort(ca.begin(), ca.end());
	reverse(k.begin(), k.end());
	reverse(ca.begin(), ca.end());
	ksum[0] = 0;
	csum[0] = 0;
	for(int i = 1; i <= k.size(); i++) ksum[i] = ksum[i-1] + k[i-1].first;
	for(int i = 1; i <= ca.size(); i++) csum[i] = csum[i-1] + ca[i-1].first;
	long long mx = -1;

	for(int i = 0; i <= k.size(); i++){
		if(i > v) break;
		int s = ca.size();
		int temp = ksum[i] + csum[min((v-i)/2, s)];
		if(temp > mx){
			mx = temp;
			m1 = i;
			m2=min((v-i)/2, s);
		}
	}
	if(mx == -1) puts("0");
	else{
		printf("%d\n", mx);
		for(int i = 0; i < m1; i++) printf("%d ", k[i].second);
		for(int i = 0; i < m2; i++) printf("%d ", ca[i].second);
	}


	
}
