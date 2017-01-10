#include<algorithm>
#include<cstdio>
#include<vector>

using namespace std;

vector<int> res;

int n, a, t;
int main(){
	scanf("%d %d", &n, &a);
	for(int i = 0; i < n; i++){
		scanf("%d", &t); 
		res.push_back(t);
	}
	nth_element(res.begin(), res.begin()+a-1, res.end());
	printf("%d\n", res[a-1]);
}
