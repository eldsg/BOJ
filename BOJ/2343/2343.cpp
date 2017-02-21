#include<cstdio>
#include<algorithm>
int main(){
	int a, b, time[100001], ans, top=0,bottom=0;
	scanf("%d %d", &a, &b);
	for(int i = 0; i< a; i++) scanf("%d", time+i), top+=time[i], bottom=std::max(bottom,time[i]);
	while(bottom <= top){
		ans = 0;
		int mid = (bottom+top)/2;
		int cnt = 1, ret = 0;
		for(int i = 0; i < a; i++){
			if(ret+time[i] > mid){
				cnt++;
				ans = std::max(ans,ret);
				ret = 0;
			}
			ret += time[i];
		}
		if(cnt <= b) top = mid - 1;
		else bottom = mid + 1;
	}
	printf("%d\n",bottom);
}
