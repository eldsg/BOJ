#include<cstdio>

long long nums[10001];

int main(){
	long long t, mx = 0, upp;
	scanf("%lld", &t);
	for(int i = 0; i < t; i++) scanf("%lld", nums+i), mx = nums[i] > mx ? nums[i] : mx;
	long long low = 0, up = mx;
	scanf("%lld", &upp);
	while(low <= up){
		long long mid = (low+up)/2;
		long long ret = 0;
		for(int i = 0; i < t; i++){
			if(nums[i] > mid) ret += mid;
			else ret += nums[i];
		}
		if(ret > upp) up = mid-1;
		else low = mid+1;
	}
	printf("%lld\n", up);
}
