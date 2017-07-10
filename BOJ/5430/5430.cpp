#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100000;

int main(){
	int tc, nc;
	char cmd[MAXN+1];
	scanf("%d", &tc);
	while(tc--){
		deque<int> ret;
		bool rev = false, err = false;
		scanf("%s%d\n", cmd, &nc);
		char c = getchar();
		//cout << c << endl;
		for(int i = 0; i < nc; i++){
			int t;
			scanf("%d,", &t);
			ret.push_back(t);
		}
		getchar();
		/*
		for(int i = 0; i < ret.size(); i++){
			printf("%d ", ret[i]);
		}
		puts("");
		*/
		// rev == true -> 역방향
		// rev == false -> 정방향
		for(int i = 0; cmd[i]; i++){
			//cout << rev << endl;
			if(cmd[i] == 'R'){
				if(rev) rev = false;
				else rev = true;
			}
			else{
				if(ret.empty()){
					err = true;
					break;
				}
				if(rev){
					ret.pop_back();
				}
				else{
					ret.pop_front();
				}
			}
		}
		if(err) printf("error\n");
		else{
			int size = ret.size();
			if(!rev){
				printf("[");
				for(int i = 0; i < size; i++){
					printf("%d", ret[i]);
					if(i!=size-1) printf(",");
				}
				printf("]");
			}
			else{
				printf("[");
				for(int i = size-1; i >=0; i--){
					printf("%d", ret[i]);
					if(i!=0) printf(",");
				}
				printf("]");	
			}
			printf("\n");
		}
	}
}