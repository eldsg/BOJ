#include<cstdio>
#include<cstdlib>
#include<algorithm>

using namespace std;

int namu[1000001];
long long ret = 0;

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	for(int i = 0; i<a; i++){
		scanf("%d", &namu[i]);
	}
	sort(namu, namu+a);
	int low = 0, high = namu[a-1];
	while(low < high){
		int mid = (low+high+1)/2;
		long long slice = 0;
		for(int i = 0 ; i<a; i++){
			slice += namu[i]-mid > 0 ? namu[i]-mid : 0;
		}
		if(slice < b) high = mid-1;
		else low = mid;
	}
	printf("%d\n", low);
}
