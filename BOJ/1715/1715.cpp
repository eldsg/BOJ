#include<cstdio>
#include<queue>
#include<vector>
#include<algorithm>
#include<functional>

using namespace std;

priority_queue<int, vector<int>, greater<int> > minheap;

int main(){
	int nums;
	scanf("%d", &nums);
	for(int i = 0, j; i < nums; i++){
		scanf("%d", &j);
		minheap.push(j);
	}
	int ret = 0;
	while(minheap.size() != 1){
		int a = minheap.top();
		minheap.pop();
		int b = minheap.top();
		minheap.pop();
		ret += (a+b);
		minheap.push(a+b);
	}
	printf("%d\n", ret);
}
