#include<cstdio>
#include<cstdlib>
#include<queue>
#include<algorithm>
#include<cmath>

using namespace std;

priority_queue<int> max_heap;
priority_queue<int, vector<int>, greater<int> > min_heap;

int main(){
	int tc;
	scanf("%d", &tc);
	while(tc--){
		int num;
		scanf("%d", &num);
		if(num == 0){
			if(min_heap.empty() && max_heap.empty()){
				printf("0\n");
			}
			else if(min_heap.empty()){
				printf("%d\n", max_heap.top());
				max_heap.pop();
			}
			else if(max_heap.empty()){
				printf("%d\n", min_heap.top());
				min_heap.pop();
			}
			else{
				int a = abs(min_heap.top());
				int b = abs(max_heap.top());
				if(a < b){
					printf("%d\n", a);
					min_heap.pop();
				}
				else{
					printf("%d\n", -b);
					max_heap.pop();
				}
			}
		}
		else if(num > 0){
			min_heap.push(num);
		}
		else{
			max_heap.push(num);
		}
	}
}
