#include <bits/stdc++.h>
using namespace std;
vector<int> r;
int main(){
	char a[32], b[32];
	scanf("%s%s", a, b);
	long long c = 0, d = 0, ret;
	int al = strlen(a);
	int bl = strlen(b);
	int pow = 1;
	for(int i = al-1; i>=0; i--){
		c += (a[i]-'0') * pow;
		pow*=2;
	}
	pow = 1;
	for(int i = bl-1; i>=0; i--){
		d += (b[i]-'0') * pow;
		pow*=2;
	}
	ret = c*d;
	//printf("%d\n", ret);
	while(ret){
		r.push_back(ret%2);
		ret/=2;
	}
	for(int i = r.size()-1; i >= 0; i--) printf("%d", r[i]);
	puts("");

}