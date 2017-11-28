#include <bits/stdc++.h>

using namespace std;

#define MAX 1000000000

vector<pair<int, int> > a;
stack<int> aa;

int proc(int b){
	bool error;
	long long k, kk;
	aa.push(b);
	int size = a.size();
	for(int i = 0; i < size; i++){
		error = false;
		//printf("%d\n", aa.top());
		switch(a[i].first){
			case 0:
				if(abs(a[i].second) > MAX) error = true;
				else aa.push(a[i].second);
				break;
			case 1:
				if(aa.empty()) error = true;
				else aa.pop();
				break;
			case 2:
				if(aa.empty()) error = true;
				else{
					k = aa.top();
					aa.pop();
					aa.push(-k);
				}
				break;
			case 3:
				if(aa.empty()) error = true;
				else{
					k = aa.top();
					aa.push(k);
				}
				break;
			case 4:
				if(aa.size() < 2) error = true;
				else{
					k = aa.top();
					aa.pop();
					kk = aa.top();
					aa.pop();
					aa.push(k);
					aa.push(kk);
				}
				break;
			case 5:
				if(aa.size() < 2) error = true;
				else{
					k = aa.top();
					aa.pop();
					kk = aa.top();
					aa.pop();
					if(abs(k+kk) > MAX) error = true;
					else aa.push(k+kk);
				}
				break;
			case 6:
				if(aa.size() < 2) error = true;
				else{
					k = aa.top();
					aa.pop();
					kk = aa.top();
					aa.pop();
					if(abs(kk-k) > MAX) error = true;
					else aa.push(kk-k);
				}
				break;
			case 7:
				if(aa.size() < 2) error = true;
				else{
					k = aa.top();
					aa.pop();
					kk = aa.top();
					aa.pop();
					long long tmp = k*kk;
					if(abs(tmp) > MAX) error = true;
					else aa.push(tmp);
				}
				break;
			case 8:
				if(aa.size() < 2) error = true;
				else{
					k = aa.top();
					aa.pop();
					kk = aa.top();
					aa.pop();
					if(k == 0) error = true;
					else{
						aa.push(kk/k);
					}
				}
				break;
			case 9:
				if(aa.size() < 2) error = true;
				else{
					k = aa.top();
					aa.pop();
					kk = aa.top();
					aa.pop();
					if(k == 0) error = true;
					else{
						aa.push(kk%k);
					}
				}
				break;

		}
		if(error) return -1;
	}
	if(aa.size() == 1) return 0;
	else return -1;
}

//0      1    2    3    4    5    6    7    8    9
//num x, pop, inv, dup, swp, add, sub, mul, div, mod
int main(){
	char s[10];
	int k, kk;
	while(1){
		scanf("%s", s);
		//printf("%s\n", s);
		if(s[0] == 'Q' && s[1] == 'U') break;
		else if(s[0] == 'E' && s[1] == 'N'){
			scanf(" %d", &k);
			/*
			for(int i = 0; i < a.size(); i++){
				printf("%d %d\n", a[i].first, a[i].second);
			}
			*/
			for(int i = 0; i < k; i++){
				scanf(" %d", &kk);
				int ret = proc(kk);
				if(ret == -1) printf("ERROR\n");
				else if(ret == 0) printf("%d\n", aa.top());
				while(!aa.empty()){
					aa.pop();
				}
			}
			printf("\n");
			a.clear();
		}
		else{
			if(s[0] == 'N' && s[1] == 'U'){
				scanf(" %d", &k);
				a.push_back({0, k});
			}
			else if(s[0] == 'P' && s[1] == 'O'){
				a.push_back({1, -1});
			}
			else if(s[0] == 'I' && s[1] == 'N'){
				a.push_back({2, -1});
			}
			else if(s[0] == 'D' && s[1] == 'U'){
				a.push_back({3, -1});
			}
			else if(s[0] == 'S' && s[1] == 'W'){
				a.push_back({4, -1});
			}
			else if(s[0] == 'A' && s[1] == 'D'){
				a.push_back({5, -1});
			}
			else if(s[0] == 'S' && s[1] == 'U'){
				a.push_back({6, -1});
			}
			else if(s[0] == 'M' && s[1] == 'U'){
				a.push_back({7, -1});
			}
			else if(s[0] == 'D' && s[1] == 'I'){
				a.push_back({8, -1});
			}
			else if(s[0] == 'M' && s[1] == 'O'){
				a.push_back({9, -1});
			}
		}
	}
}