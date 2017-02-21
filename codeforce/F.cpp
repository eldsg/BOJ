#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;

static inline bool is_number(const int i){
	return !((i & 0Xf0) ^ 0x30);
}

static inline void scan_int(int *const x){
	register int c = getchar_unlocked();
	*x = 0;
	while(is_number(c)){
		*x = ((*x<<1) + (*x<<3) + (c - '0'));
		c = getchar_unlocked();
	}
}

vector<int> array;

void proc(int l, int r){
	vector<int> temp;
	int mini = 1e9;
	temp.assign(array.begin()+l-1, array.begin()+r);
	sort(temp.begin(), temp.end());
	int size = temp.size();
//	for(int i = 0; i < temp.size(); i++) printf("%d ", temp[i]);
	for(int i = 1; i < size; i++){
		mini = min(mini, temp[i]-temp[i-1]);
		if(mini == 0) break;
	}
	printf("%d\n", mini);
	temp.clear();
}

int main(){
	int num;
	scan_int(&num);
	for(int i = 0; i < num; i++){
		int a;
		scan_int(&a);
		array.push_back(a);
	}
	scanf("%d", &num);
	for(int i = 0; i < num; i++){
		int a, b;
		scanf("%d %d", &a, &b);
		proc(a, b);
	}
}
