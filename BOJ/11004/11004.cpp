#include<algorithm>
#include<cstdio>
#include<set>

std::set<int> res;
int n, a, t, k = 1;
int main(){
	scanf("%d %d", &n, &a);
	for(int i = 0; i < n; i++){
		scanf("%d", &t); 
		res.insert(t);
	}
	auto it = res.begin();
	for(it; k++<a; it++);
	printf("%d\n", *(it));
}
