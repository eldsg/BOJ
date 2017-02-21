#include<cstdio>
#include<vector>
#include<cstdlib>
#include<algorithm>

using namespace std;

typedef struct Tree{
	int parent;
	vector<int> child;
	bool remove;
}Tree;

Tree t[51];

void process(int r){
	int size = t[r].child.size();
	if(size){
		for(int i = size-1; i >= 0; i--){
			int nr = t[r].child[i];
//			t[r].child.pop_back();
			process(nr);
		}
	}
	t[r].remove = true;
}

int main(){
	int num, remove;
	scanf("%d", &num);
	for(int i = 0; i< num; i++){
		scanf("%d", &t[i].parent);
		t[i].remove = false;
		if(t[i].parent != -1){
			t[t[i].parent].child.push_back(i);
		}
	}
	scanf("%d", &remove);
	process(remove);
	int ret = 0;
	for(int i = 0; i < num; i++){
		bool check = false;
		int size = t[i].child.size();
		if(!t[i].remove){
			for(int j = 0; j<size; j++){
				if(!t[t[i].child[j]].remove){
					check = true;
					break;
				}
			}
			if(!check) ret++;
		}
	}
	printf("%d\n", ret);
}
