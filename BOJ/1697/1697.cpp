#include <cstdio>
#include <queue>
#include <cstring>
std::queue<int> ret;

int a, b;
bool visit[100001]={0,};
int count[100001] ={0,};
void process(int x){
	memset(visit, false, sizeof(visit));
	memset(count, 0, sizeof(count));
	ret.push(x);
	visit[x] = 1;
	while(!ret.empty()){
		if(ret.front()-1>=0 && !visit[ret.front()-1]){
			visit[ret.front()-1] = true;
			count[ret.front()-1] = count[ret.front()]+1;			
			ret.push(ret.front()-1);
			if(ret.front()-1 == b) break;
		}
		if(ret.front()+1<=100000 && !visit[ret.front()+1]){
			visit[ret.front()+1] = true;
			count[ret.front()+1] = count[ret.front()]+1;
			ret.push(ret.front()+1);
			if(ret.front()+1 == b) break;
		}
		if(2*ret.front() <= 100000 && !visit[2*ret.front()]){
			visit[2*ret.front()] = true;
			count[ret.front()*2] = count[ret.front()]+1;
			ret.push(2*ret.front());
			if(2*ret.front() == b) break;
		}
		ret.pop();
	}
	printf("%d\n", count[b]);
	
}

int main(){
	scanf("%d %d", &a, &b);
	process(a);
}
