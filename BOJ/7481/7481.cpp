#include <bits/stdc++.h>
using namespace std;
int t, a, b, n;
int main(){
	scanf("%d", &t);
	while(t--){
		scanf("%d%d%d", &a, &b, &n);
		if(a > n && b > n) puts("Impossible");
		else if(a == n) puts("1 0");
		else if(b == n) puts("0 1");
		else{
		//	a*i+b*j == n
			int m = max(a, b);
			int k = n/m;
			int minn = min(a, b);
			int ac, mc, it, jt;
			int ret = 1e9;
			for(int i = m*k; i >= 0; i-=m){
				it = (n-i)/minn;
				jt = i/m;
				if(!((n-i)%minn) && it+jt < ret){
					ret = it+jt;
					ac = it;
					mc = jt;
					break;
				}
			}
			if(ret != 1e9){
				if(a > b) printf("%d %d\n", mc, ac);
				else printf("%d %d\n", ac, mc);
			}
			//예외 처리 안해서 2번 더 틀림 ㅜㅜ 실수하지 말자 
			else{
				puts("Impossible");
			}
		}
	}
}