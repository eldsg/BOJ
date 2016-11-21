#include<cstdio>
#include<cstdlib>
#include<algorithm>

using namespace std;

long long int lan[10001];
long long ret = 0;

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	for(int i = 0; i<a; i++){
		scanf("%lld", &lan[i]);
	}
	sort(lan, lan+a);
	long long int low = 0, high = lan[a-1];
	while(low < high){
		long long int mid = (low+high+1)/2;
		long long slice = 0;
		for(int i = 0 ; i<a; i++){
			slice += lan[i]/mid;
		}
		if(slice < b) high = mid-1;
		else low = mid;
	}
	printf("%lld\n", low);
}
