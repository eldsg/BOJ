#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	int a, b;
	int t[200001];
	scanf("%d %d", &a, &b);
	for(int i = 0; i < a; i++){
			scanf("%d", t+i);
	}
	sort(t, t+a);
	int low = 0, up= 1e9+1, mid, k;
	while(low <= up){
			mid = (low+up)/2;
			int cnt = 1, k=t[0];
			for(int i = 1; i< a; i++){
				if(t[i]-k>=mid){
					k = t[i];
					cnt++;
				}
			}
			if(cnt < b) up = mid-1;
			else low = mid +1;
	}
	printf("%d\n", up);
}
