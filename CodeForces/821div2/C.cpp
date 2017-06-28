#include<cstdio>
#include<vector>
#include<stack>
#include<string>
#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

vector<int> order;
int main(){
	int num, cnt = 0, ne = 1;
	scanf("%d", &num);
	for(int i = 0; i < 2*num; i++){
		char str[1001];
		int n;
		scanf("%s", str);
		if(str[0] == 'a'){
			scanf("%d", &n);
			order.push_back(n);
		}
		else{
			if(!order.empty()){
			if(order[order.size()-1] == ne){
				order.pop_back();
			}
			else{
				cnt++;
				while(!order.empty()) order.pop_back();
			}
			}
			ne++;
		}
	}
	printf("%d\n", cnt);

}
